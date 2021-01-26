#pragma once

#include <QMainWindow>
#include <QScopedPointer>

class Controller;
class Model;

class GraphicsView;
class SourceView;

enum class ResourceOperationResult;


namespace Ui {
    class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget * parent = nullptr);
    ~MainWindow();

    void setModel(const Model * model);
    const Model * model() const;

    void setController(const Controller * controller);
    const Controller * controller() const;

protected:
    void initializeGraphicsView();
    void initializeSourceView();

    void updateCurrentTabTitle(bool saved) const;
    void updateCurrentMainTitle(bool saved) const;
    void updateMenuIcons(bool saved ) const;
    virtual void closeEvent(QCloseEvent * event);

private slots:
    void onTabSelected(int index);
    void onFileSelected(const QString & file);
    void replaceTab(QTabWidget * tabs, int index,
                    QWidget * replacement, const QString & label);
    void onNewResource(const QString &file);
    void onResourceOpenend(const QString & file);
    void onResourceClosed(int i);
    void onResourceSaved(int i);
    void onResourceModified(int i);

    void onResourceOperationFailed(ResourceOperationResult result);

    void on_actionOpenFile_triggered();
    void on_actionCloseFile_triggered();
    void on_actionSaveFile_triggered();
    void on_actionSaveFileAs_triggered();
    void on_actionSaveAll_triggered();

    void on_actionSwapViews_triggered();

    void on_actionFitView_toggled(bool enabled) const;
    void on_graphicsView_fitViewChanged(bool enabled) const;

    void on_sourceView_highlightChanged(bool enabled) const;
    void on_sourceView_wordWrapChanged(bool enabled) const;
    void on_sourceView_sourceChanged() const;
    void status_Data_Changed(QString statusData) const;

    void on_actionZoomIn_triggered();
    void on_actionZoomOut_triggered();

protected:
    const Model * m_model = nullptr;            // Intent: receive signals from.
    const Controller * m_controller = nullptr;  // Intent: emit signals to.

private:
    Ui::MainWindow * m_ui;
};
