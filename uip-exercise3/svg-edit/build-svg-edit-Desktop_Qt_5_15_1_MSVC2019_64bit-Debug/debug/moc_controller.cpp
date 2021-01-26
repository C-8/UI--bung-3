/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../svg-edit/controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Controller_t {
    QByteArrayData data[15];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Controller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Controller_t qt_meta_stringdata_Controller = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Controller"
QT_MOC_LITERAL(1, 11, 11), // "newResource"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 12), // "openResource"
QT_MOC_LITERAL(4, 37, 4), // "file"
QT_MOC_LITERAL(5, 42, 2), // "id"
QT_MOC_LITERAL(6, 45, 12), // "saveResource"
QT_MOC_LITERAL(7, 58, 1), // "i"
QT_MOC_LITERAL(8, 60, 14), // "saveResourceAs"
QT_MOC_LITERAL(9, 75, 8), // "QString&"
QT_MOC_LITERAL(10, 84, 13), // "closeResource"
QT_MOC_LITERAL(11, 98, 14), // "modifyResource"
QT_MOC_LITERAL(12, 113, 6), // "source"
QT_MOC_LITERAL(13, 120, 4), // "exit"
QT_MOC_LITERAL(14, 125, 4) // "code"

    },
    "Controller\0newResource\0\0openResource\0"
    "file\0id\0saveResource\0i\0saveResourceAs\0"
    "QString&\0closeResource\0modifyResource\0"
    "source\0exit\0code"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Controller[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    2,   55,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       8,    2,   63,    2, 0x0a /* Public */,
      10,    1,   68,    2, 0x0a /* Public */,
      11,    2,   71,    2, 0x0a /* Public */,
      13,    1,   76,    2, 0x0a /* Public */,
      13,    0,   79,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 9,    7,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Controller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newResource(); break;
        case 1: _t->openResource((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->saveResource((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->saveResourceAs((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->closeResource((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->modifyResource((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->exit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->exit(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Controller::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Controller.data,
    qt_meta_data_Controller,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Controller.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
