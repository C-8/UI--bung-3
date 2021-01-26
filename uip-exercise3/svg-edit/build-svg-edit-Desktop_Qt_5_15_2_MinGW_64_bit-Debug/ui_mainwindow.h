/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenTest;
    QAction *actionExit;
    QAction *actionNewFile;
    QAction *actionOpenFile;
    QAction *actionCloseFile;
    QAction *actionSaveFile;
    QAction *actionSaveFileAs;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionFitView;
    QAction *actionColumns2;
    QAction *actionColumns3;
    QAction *actionSelectAll;
    QAction *actionViewSource;
    QAction *actionViewGraphic;
    QAction *actionColumns1;
    QAction *actionSwapViews;
    QAction *actionSyntaxHighlighting;
    QAction *actionWordWrap;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menuEdit;
    QMenu *menuView;
    QStatusBar *statusBar;
    QToolBar *toolBarView;
    QToolBar *toolBar;
    QMainWindow *mainWindow;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(673, 389);
        mainWindow = MainWindow;
        actionOpenTest = new QAction(MainWindow);
        actionOpenTest->setObjectName(QString::fromUtf8("actionOpenTest"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setMenuRole(QAction::QuitRole);
        actionNewFile = new QAction(MainWindow);
        actionNewFile->setObjectName(QString::fromUtf8("actionNewFile"));
        actionNewFile->setEnabled(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/material/material/baseline-add-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionNewFile->setIcon(icon);
        actionOpenFile = new QAction(MainWindow);
        actionOpenFile->setObjectName(QString::fromUtf8("actionOpenFile"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/material/material/baseline-open_alt-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenFile->setIcon(icon1);
        actionCloseFile = new QAction(MainWindow);
        actionCloseFile->setObjectName(QString::fromUtf8("actionCloseFile"));
        actionCloseFile->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/material/material/baseline-clear-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloseFile->setIcon(icon2);
        actionSaveFile = new QAction(MainWindow);
        actionSaveFile->setObjectName(QString::fromUtf8("actionSaveFile"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/material/material/baseline-save_alt-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveFile->setIcon(icon3);
        actionSaveFileAs = new QAction(MainWindow);
        actionSaveFileAs->setObjectName(QString::fromUtf8("actionSaveFileAs"));
        actionSaveFileAs->setEnabled(true);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/material/material/baseline-undo-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon4);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionRedo->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/material/material/baseline-redo-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon5);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QString::fromUtf8("actionZoomIn"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/material/material/baseline-zoom_in-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon6);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QString::fromUtf8("actionZoomOut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/material/material/baseline-zoom_out-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon7);
        actionFitView = new QAction(MainWindow);
        actionFitView->setObjectName(QString::fromUtf8("actionFitView"));
        actionFitView->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/material/material/baseline-aspect_ratio-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionFitView->setIcon(icon8);
        actionColumns2 = new QAction(MainWindow);
        actionColumns2->setObjectName(QString::fromUtf8("actionColumns2"));
        actionColumns2->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/material/material/baseline-view_column_2-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionColumns2->setIcon(icon9);
        actionColumns3 = new QAction(MainWindow);
        actionColumns3->setObjectName(QString::fromUtf8("actionColumns3"));
        actionColumns3->setEnabled(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/material/material/baseline-view_column_3-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionColumns3->setIcon(icon10);
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/material/material/baseline-select_all-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelectAll->setIcon(icon11);
        actionViewSource = new QAction(MainWindow);
        actionViewSource->setObjectName(QString::fromUtf8("actionViewSource"));
        actionViewSource->setEnabled(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/material/material/baseline-code-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewSource->setIcon(icon12);
        actionViewGraphic = new QAction(MainWindow);
        actionViewGraphic->setObjectName(QString::fromUtf8("actionViewGraphic"));
        actionViewGraphic->setEnabled(false);
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/material/material/baseline-crop_original-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionViewGraphic->setIcon(icon13);
        actionColumns1 = new QAction(MainWindow);
        actionColumns1->setObjectName(QString::fromUtf8("actionColumns1"));
        actionColumns1->setEnabled(false);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/material/material/baseline-view_column_1-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionColumns1->setIcon(icon14);
        actionSwapViews = new QAction(MainWindow);
        actionSwapViews->setObjectName(QString::fromUtf8("actionSwapViews"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/material/material/baseline-swap_horiz-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSwapViews->setIcon(icon15);
        actionSyntaxHighlighting = new QAction(MainWindow);
        actionSyntaxHighlighting->setObjectName(QString::fromUtf8("actionSyntaxHighlighting"));
        actionSyntaxHighlighting->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/material/material/baseline-format_strikethrough-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon16.addFile(QString::fromUtf8(":/material/material/baseline-title-24px.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionSyntaxHighlighting->setIcon(icon16);
        actionWordWrap = new QAction(MainWindow);
        actionWordWrap->setObjectName(QString::fromUtf8("actionWordWrap"));
        actionWordWrap->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/material/material/baseline-notes-24px.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon17.addFile(QString::fromUtf8(":/material/material/baseline-wrap_text-24px.svg"), QSize(), QIcon::Normal, QIcon::On);
        actionWordWrap->setIcon(icon17);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));

        horizontalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 673, 21));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBarView = new QToolBar(MainWindow);
        toolBarView->setObjectName(QString::fromUtf8("toolBarView"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBarView);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menu_File->addAction(actionNewFile);
        menu_File->addAction(actionOpenFile);
        menu_File->addSeparator();
        menu_File->addAction(actionCloseFile);
        menu_File->addSeparator();
        menu_File->addAction(actionSaveFile);
        menu_File->addAction(actionSaveFileAs);
        menu_File->addSeparator();
        menu_File->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelectAll);
        menuView->addAction(actionSwapViews);
        menuView->addSeparator();
        menuView->addAction(actionViewSource);
        menuView->addAction(actionViewGraphic);
        menuView->addSeparator();
        menuView->addAction(actionColumns1);
        menuView->addAction(actionColumns2);
        menuView->addAction(actionColumns3);
        toolBarView->addAction(actionSwapViews);
        toolBarView->addSeparator();
        toolBarView->addAction(actionViewSource);
        toolBarView->addAction(actionViewGraphic);
        toolBarView->addSeparator();
        toolBarView->addAction(actionColumns1);
        toolBarView->addAction(actionColumns2);
        toolBarView->addAction(actionColumns3);
        toolBar->addAction(actionNewFile);
        toolBar->addAction(actionOpenFile);
        toolBar->addAction(actionSaveFile);
        toolBar->addSeparator();
        toolBar->addAction(actionSyntaxHighlighting);
        toolBar->addAction(actionWordWrap);
        toolBar->addAction(actionSelectAll);
        toolBar->addSeparator();
        toolBar->addAction(actionZoomIn);
        toolBar->addAction(actionZoomOut);
        toolBar->addAction(actionFitView);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SVG Edit", nullptr));
        actionOpenTest->setText(QCoreApplication::translate("MainWindow", "Open &Test", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenTest->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNewFile->setText(QCoreApplication::translate("MainWindow", "&New File", nullptr));
        actionOpenFile->setText(QCoreApplication::translate("MainWindow", "&Open File", nullptr));
        actionCloseFile->setText(QCoreApplication::translate("MainWindow", "&Close File", nullptr));
        actionSaveFile->setText(QCoreApplication::translate("MainWindow", "&Save File", nullptr));
        actionSaveFileAs->setText(QCoreApplication::translate("MainWindow", "Save File &As", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "&Undo", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "&Redo", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomIn->setText(QCoreApplication::translate("MainWindow", "Zoom &In", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomIn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl++", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoomOut->setText(QCoreApplication::translate("MainWindow", "Zoom &Out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoomOut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFitView->setText(QCoreApplication::translate("MainWindow", "&Fit to View", nullptr));
        actionColumns2->setText(QCoreApplication::translate("MainWindow", "&Two Columns", nullptr));
#if QT_CONFIG(shortcut)
        actionColumns2->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Shift+2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColumns3->setText(QCoreApplication::translate("MainWindow", "Th&ree Columns", nullptr));
#if QT_CONFIG(shortcut)
        actionColumns3->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Shift+3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelectAll->setText(QCoreApplication::translate("MainWindow", "Select &All", nullptr));
#if QT_CONFIG(shortcut)
        actionSelectAll->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_CONFIG(shortcut)
        actionViewSource->setText(QCoreApplication::translate("MainWindow", "View &Source", nullptr));
        actionViewGraphic->setText(QCoreApplication::translate("MainWindow", "View &Graphic", nullptr));
        actionColumns1->setText(QCoreApplication::translate("MainWindow", "&Single Column", nullptr));
#if QT_CONFIG(shortcut)
        actionColumns1->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Shift+1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSwapViews->setText(QCoreApplication::translate("MainWindow", "&Swap Views", nullptr));
        actionSyntaxHighlighting->setText(QCoreApplication::translate("MainWindow", "Syntax &Highlighting", nullptr));
        actionWordWrap->setText(QCoreApplication::translate("MainWindow", "Word &Wrap", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        toolBarView->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
