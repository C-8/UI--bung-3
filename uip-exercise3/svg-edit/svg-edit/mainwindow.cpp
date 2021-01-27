#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tabstate.h"

#include <QActionGroup>
#include <QSplitter>
#include <QFileDialog>
#include <QErrorMessage>
#include<QSettings>

#include "model.h"
#include "resource.h"
#include "controller.h"

#include "graphicsview.h"
#include "sourceview.h"
#include "tabstate.h"

#include <QDebug>
#include <iostream>


MainWindow::MainWindow(QWidget * parent) :
    QMainWindow(parent),
    m_ui(new Ui::MainWindow)
{
    m_ui->setupUi(this);

    QSettings settings("MyCompany", "MyApp");
    restoreGeometry(settings.value("m_ui/geometry").toByteArray());
    restoreState(settings.value("m_ui/windowState").toByteArray());

    connect(m_ui->tabWidget, &QTabWidget::currentChanged, this, &MainWindow::onTabSelected);
    //m_ui->graphicsView->setFitView(true);
    //m_ui->sourceView->setHighlighting(true);
    //m_ui->sourceView->setWordWrap(true);

    // connect(m_ui->actionViewSource, SIGNAL(triggered()), this, SLOT(foobar1()));
    // connect(m_ui->actionViewSource, &QAction::triggered,[]() { qDebug() << "test mit lambda"; });
    // connect(m_ui->actionSelectAll, &QAction::triggered, m_ui->sourceView, &SourceView::selectAll);

    //connect(m_ui->actionSyntaxHighlighting, &QAction::triggered, m_ui->sourceView, &SourceView::setHighlighting);
    //connect(m_ui->actionWordWrap, &QAction::triggered, m_ui->sourceView, &SourceView::setWordWrap);
}

MainWindow::~MainWindow()
{
    delete m_ui;
}


void MainWindow::setModel(const Model * model)
{
    if(m_model == model) {
        return;
    }

    if(m_model != nullptr) {
        // disconnect();
    }
    m_model = model;

    if(m_model!= nullptr) {
        connect(m_model, &Model::newResourceOpened, this, &MainWindow::onNewResource);
        connect(m_model, &Model::resourceOpened, this, &MainWindow::onResourceOpenend);
        connect(m_model, &Model::resourceClosed, this, &MainWindow::onResourceClosed);
        connect(m_model, &Model::resourceSaved, this, &MainWindow::onResourceSaved);
        connect(m_model, &Model::resourceModified, this, &MainWindow::onResourceModified);
        connect(m_model, &Model::operationFailed, this, &MainWindow::onResourceOperationFailed);
    }
}

const Model * MainWindow::model() const
{
    return m_model;
}


void MainWindow::setController(const Controller * controller)
{
    if(m_controller == controller) {
        return;
    }

    if(m_controller != nullptr) {
        m_controller->disconnect();
    }
    m_controller = controller;

    if(m_controller != nullptr) {
        connect(m_ui->actionNewFile, &QAction::triggered, m_controller, &Controller::newResource);
        connect(m_ui->actionSaveFile, &QAction::triggered, m_controller, &Controller::saveResource);
        connect(m_ui->actionCloseFile, &QAction::triggered, m_controller, &Controller::closeResource);

        connect(m_ui->actionExit, &QAction::triggered, m_controller, &Controller::exit);
        m_controller->newResource();
    }
}

const Controller * MainWindow::controller() const
{
    return m_controller;
}


void MainWindow::closeEvent(QCloseEvent * event)
{
    QSettings settings("MyCompany", "MyApp");
    settings.setValue("m_ui/geometry", saveGeometry());
    settings.setValue("m_ui/windowState", saveState());
    m_ui->actionExit->trigger();
    Q_UNUSED(event);
}

void MainWindow::replaceTab(QTabWidget * tabs, int index,
                QWidget * replacement, const QString & label)
{
  Q_ASSERT(tabs && tabs->count() > index);
  tabs->removeTab(index);
  if (replacement) tabs->insertTab(index, replacement, label);
}

void MainWindow::onNewResource(const QString &file){
    auto id = m_ui->tabWidget->currentIndex()+1;
    qDebug()<<"new Resource: "<< m_ui->tabWidget->currentIndex()+1;

    QSplitter* splitter = new QSplitter();
    SourceView* sourceView = new SourceView(splitter);
    sourceView->setObjectName(QString("sourceView"));
    sourceView->setResource(m_model->resource(id));
    connect(sourceView, SIGNAL(sourceChanged()), this, SLOT(on_sourceView_sourceChanged()));
    connect(sourceView, SIGNAL(updatedStatusData(QString)), this, SLOT(status_Data_Changed(QString)));


    GraphicsView* graphicsView = new GraphicsView(splitter);
    graphicsView->setObjectName(QString("graphicsView"));
    graphicsView->setResource(m_model->resource(id));
    connect(graphicsView, SIGNAL(updatedStatusData(QString)), this, SLOT(status_Data_Changed(QString)));
    tabstates.push_back(new TabState(file));

    m_ui->tabWidget->setCurrentIndex(m_ui->tabWidget->addTab(splitter,file));
    updateCurrentTabTitle(true);
}

void MainWindow::onResourceOpenend(const QString & file)
{
    //m_ui->sourceView->setResource(m_model->resource());
    //m_ui->graphicsView->setResource(m_model->resource());
    //m_ui->tabWidget->addTab(m_ui->splitter,file);
    //m_ui->tabWidget->setCurrentWidget(m_ui->splitter);
    qDebug()<<"open Resource: "<< m_ui->tabWidget->currentIndex();

    auto id = m_ui->tabWidget->currentIndex();

    QSplitter* splitter = new QSplitter();
    SourceView* sourceView = new SourceView(splitter);
    sourceView->setObjectName(QString("sourceView"));
    sourceView->setResource(m_model->resource(id));
    connect(sourceView, SIGNAL(sourceChanged()), this, SLOT(on_sourceView_sourceChanged()));
    connect(sourceView, SIGNAL(updatedStatusData(QString)), this, SLOT(status_Data_Changed(QString)));


    GraphicsView* graphicsView = new GraphicsView(splitter);
    graphicsView->setObjectName(QString("graphicsView"));
    graphicsView->setResource(m_model->resource(id));
    connect(graphicsView, SIGNAL(updatedStatusData(QString)), this, SLOT(status_Data_Changed(QString)));
    tabstates[id]->file = file;


    replaceTab(m_ui->tabWidget, id, splitter, file);
    m_ui->tabWidget->setCurrentIndex(id);
    //connect(m_ui->tabWidget, SIGNAL(currentChanged(int)), this, SLOT(onTabSelected(int)));

    updateCurrentTabTitle(true);
}

void MainWindow::onTabSelected(int index)
{
    //auto graphicsView = m_ui->tabWidget->currentWidget()->findChild<GraphicsView *>(QString("graphicsView"));
    //auto sourceView = m_ui->tabWidget->currentWidget()->findChild<SourceView *>(QString("sourceView"));
    auto fileInfo = m_model->resource(index)->getFileInfo();
    QWidget::setWindowTitle(fileInfo.absoluteFilePath());

}

void MainWindow::onResourceClosed(int i)
{
    //temporary block signals emitting from the closing tab to prevent errors.
    QSignalBlocker blocker(m_ui->tabWidget);
    m_ui->tabWidget->removeTab(i);
}

void MainWindow::onResourceModified(int i)
{
    std::cerr << "Resource " << i << " Modified!" << "\n";
    auto graphicsView = m_ui->tabWidget->currentWidget()->findChild<GraphicsView *>(QString("graphicsView"));
    graphicsView->reloadFromResource();
    //m_ui->graphicsView->setResource(m_model->resource());
}

void MainWindow::onResourceSaved(int i)
{
    qDebug()<<"ressource saved";
    updateCurrentTabTitle(true);
}


void MainWindow::onResourceOperationFailed(const ResourceOperationResult result)
{

    if (result == ResourceOperationResult::FileSaveFailed)
    {
        //on_actionSaveFileAs_triggered();
    } else {
        auto errorDialog = new QErrorMessage(this);
        errorDialog->showMessage(QString("A Problem occurred: %1").arg(Resource::operationResultString(result)));
    }
}


void MainWindow::on_actionSwapViews_triggered()
{
    auto splitter = m_ui->tabWidget->currentWidget()->findChild<QSplitter *>(QString("splitter"));
    const auto widget0 = splitter->widget(0);
    const auto widget1 = splitter->widget(1);

    const auto sizes = splitter->sizes();

    splitter->insertWidget(0, widget1);
    splitter->insertWidget(1, widget0);

    splitter->setSizes(sizes);

}

void MainWindow::on_actionOpenFile_triggered()
{
    auto dialog = new QFileDialog(this);
    dialog->setFileMode(QFileDialog::ExistingFile);
    dialog->setViewMode(QFileDialog::Detail);
    dialog->setAcceptMode(QFileDialog::AcceptOpen);

    dialog->setMimeTypeFilters({ "image/svg+xml" });
    dialog->setNameFilter("Scalable Vector Graphic Files (*.svg);; All Files (*.*)");

    dialog->open(this, SLOT(onFileSelected(const QString &)));
}

void MainWindow::on_actionCloseFile_triggered() {
    auto id = m_ui->tabWidget->currentIndex();
    m_controller->closeResource(id);
}

void MainWindow::on_actionSaveFile_triggered() {
    std::cerr << "save file triggered" << "\n";

    auto id = m_ui->tabWidget->currentIndex();
    m_controller->saveResource(id);
}

void MainWindow::on_actionSaveFileAs_triggered() {
    auto id = m_ui->tabWidget->currentIndex();

    QString fileName = QFileDialog::getSaveFileName(this,
           tr("Save File"), "",
           tr("Scalable Vector Graphic Files (*.svg);; All Files (*.*)"));
    m_controller->saveResourceAs(id, fileName);
}

void MainWindow::on_actionSaveAll_triggered() {
    std::cerr << "save all triggered" << "\n";
    m_controller->saveAllResource();
}

void MainWindow::onFileSelected(const QString & file) {
    auto tabCount = m_ui->tabWidget->count();
    auto id = m_ui->tabWidget->currentIndex();
    std::cout<<tabCount;
    m_controller-> openResource(file, id);

}

void MainWindow::on_actionFitView_toggled(bool enabled) const
{
    auto graphicsView = m_ui->tabWidget->currentWidget()->findChild<GraphicsView *>(QString("graphicsView"));
    graphicsView->setFitView(enabled);
}

void MainWindow::on_graphicsView_fitViewChanged(bool enabled) const
{
    m_ui->actionFitView->blockSignals(true);
    m_ui->actionFitView->setChecked(enabled);
    m_ui->actionFitView->blockSignals(false);
}

void MainWindow::on_sourceView_highlightChanged(bool enabled) const
{
    m_ui->actionSyntaxHighlighting->blockSignals(true);
    m_ui->actionSyntaxHighlighting->setChecked(enabled);
    m_ui->actionSyntaxHighlighting->blockSignals(false);
    tabstates[m_ui->tabWidget->currentIndex()]->highlight_checked = !tabstates[m_ui->tabWidget->currentIndex()]->highlight_checked;
}

void MainWindow::on_sourceView_wordWrapChanged(bool enabled) const
{
    m_ui->actionWordWrap->blockSignals(true);
    m_ui->actionWordWrap->setChecked(enabled);
    m_ui->actionWordWrap->blockSignals(false);
    tabstates[m_ui->tabWidget->currentIndex()]->wordwrap_checked = !tabstates[m_ui->tabWidget->currentIndex()]->wordwrap_checked;


}

void MainWindow::on_sourceView_sourceChanged() const
{
    auto tabWidget = m_ui ->tabWidget;
    auto tabIndex = tabWidget->currentIndex();
    auto sourceView = tabWidget->currentWidget()->findChild<SourceView *>(QString("sourceView"));
    const auto source = sourceView->source();
    m_controller->modifyResource(tabIndex, source);

    updateCurrentTabTitle(false);
}

void MainWindow::status_Data_Changed(QString statusData) const
{
    m_ui->statusBar->showMessage(statusData);
}


void MainWindow::on_actionZoomIn_triggered()
{
    auto graphicsView = m_ui->tabWidget->currentWidget()->findChild<GraphicsView *>(QString("graphicsView"));
    graphicsView->setZoom(1.25);
}

void MainWindow::on_actionZoomOut_triggered()
{
    auto graphicsView = m_ui->tabWidget->currentWidget()->findChild<GraphicsView *>(QString("graphicsView"));
    graphicsView->setZoom(1.0 / 1.25);
}

void MainWindow::updateCurrentTabTitle(bool saved) const
{
    auto tabIndex = m_ui->tabWidget->currentIndex();
    auto fileInfo = m_model->resource(tabIndex)->getFileInfo();
    auto fileName = fileInfo.fileName();
    if (saved){
        m_ui->tabWidget->setTabText(tabIndex, fileName);
    } else {
        m_ui->tabWidget->setTabText(tabIndex, "* " + fileName);
    }
    updateCurrentMainTitle(saved);
    updateMenuIcons(saved);


}

void MainWindow::updateCurrentMainTitle(bool saved) const{
    auto tabIndex = m_ui->tabWidget->currentIndex();
    auto fileInfo = m_model->resource(tabIndex)->getFileInfo();
    auto aTitle = fileInfo.filePath();
    QString shownTitle="";

    QStringList  splittedTitle  = aTitle.split("/");
    if(!splittedTitle.isEmpty())
    //splittedTitle.removeLast()
    while(!splittedTitle.isEmpty() && shownTitle.length() + splittedTitle.last().length()<= 65){
            shownTitle = "/" + splittedTitle.last()  + shownTitle;
            splittedTitle.removeLast();
        }
    if(splittedTitle.isEmpty()){
        shownTitle.remove(0,1);
    }
    else{
        shownTitle = "..." + shownTitle;
    }
    /*if(MainWindow::isWindowModified()){
        modificationStatus = "[*]";
    }*/
    if(shownTitle == ""){
        m_ui->mainWindow->setWindowTitle ( "SVG-Editor" );
        exit(0);
    }
    if (saved){
        m_ui->mainWindow->setWindowTitle(shownTitle);

    } else {
        m_ui->mainWindow->setWindowTitle("* " + shownTitle);
    }


}

void MainWindow::updateMenuIcons( bool saved) const{

    auto tabIndex = m_ui->tabWidget->currentIndex();
    auto fileInfo = m_model->resource(tabIndex)->getFileInfo();
    auto fileName = fileInfo.fileName();
    if(saved){
        m_ui->actionSaveAll->setEnabled(false);
        m_ui->actionSaveFile->setEnabled(false);
        m_ui->actionSaveFileAs->setEnabled(false);
    }
    else{
        m_ui->actionSaveAll->setEnabled(true);
        m_ui->actionSaveFile->setEnabled(true);
        m_ui->actionSaveFileAs->setEnabled(true);
    }
    m_ui->actionSaveFile->setText( "Save "+ fileName);
    m_ui->actionSaveFileAs->setText( "Save "+ fileName+ " As");
}

void MainWindow::openRecent(){

}
