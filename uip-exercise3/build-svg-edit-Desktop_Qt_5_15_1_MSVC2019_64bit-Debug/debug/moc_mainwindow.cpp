/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../svg-edit/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[20];
    char stringdata0[412];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "saveResource"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 12), // "setMainTitle"
QT_MOC_LITERAL(4, 38, 17), // "onResourceOpenend"
QT_MOC_LITERAL(5, 56, 16), // "onResourceClosed"
QT_MOC_LITERAL(6, 73, 18), // "onResourceModified"
QT_MOC_LITERAL(7, 92, 25), // "onResourceOperationFailed"
QT_MOC_LITERAL(8, 118, 23), // "ResourceOperationResult"
QT_MOC_LITERAL(9, 142, 6), // "result"
QT_MOC_LITERAL(10, 149, 27), // "on_actionOpenFile_triggered"
QT_MOC_LITERAL(11, 177, 28), // "on_actionSwapViews_triggered"
QT_MOC_LITERAL(12, 206, 24), // "on_actionFitView_toggled"
QT_MOC_LITERAL(13, 231, 7), // "enabled"
QT_MOC_LITERAL(14, 239, 30), // "on_graphicsView_fitViewChanged"
QT_MOC_LITERAL(15, 270, 30), // "on_sourceView_highlightChanged"
QT_MOC_LITERAL(16, 301, 29), // "on_sourceView_wordWrapChanged"
QT_MOC_LITERAL(17, 331, 27), // "on_sourceView_sourceChanged"
QT_MOC_LITERAL(18, 359, 25), // "on_actionZoomIn_triggered"
QT_MOC_LITERAL(19, 385, 26) // "on_actionZoomOut_triggered"

    },
    "MainWindow\0saveResource\0\0setMainTitle\0"
    "onResourceOpenend\0onResourceClosed\0"
    "onResourceModified\0onResourceOperationFailed\0"
    "ResourceOperationResult\0result\0"
    "on_actionOpenFile_triggered\0"
    "on_actionSwapViews_triggered\0"
    "on_actionFitView_toggled\0enabled\0"
    "on_graphicsView_fitViewChanged\0"
    "on_sourceView_highlightChanged\0"
    "on_sourceView_wordWrapChanged\0"
    "on_sourceView_sourceChanged\0"
    "on_actionZoomIn_triggered\0"
    "on_actionZoomOut_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    1,   94,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    1,   99,    2, 0x08 /* Private */,
      14,    1,  102,    2, 0x08 /* Private */,
      15,    1,  105,    2, 0x08 /* Private */,
      16,    1,  108,    2, 0x08 /* Private */,
      17,    0,  111,    2, 0x08 /* Private */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveResource(); break;
        case 1: _t->setMainTitle(); break;
        case 2: _t->onResourceOpenend(); break;
        case 3: _t->onResourceClosed(); break;
        case 4: _t->onResourceModified(); break;
        case 5: _t->onResourceOperationFailed((*reinterpret_cast< ResourceOperationResult(*)>(_a[1]))); break;
        case 6: _t->on_actionOpenFile_triggered(); break;
        case 7: _t->on_actionSwapViews_triggered(); break;
        case 8: _t->on_actionFitView_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_graphicsView_fitViewChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_sourceView_highlightChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_sourceView_wordWrapChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->on_sourceView_sourceChanged(); break;
        case 13: _t->on_actionZoomIn_triggered(); break;
        case 14: _t->on_actionZoomOut_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
