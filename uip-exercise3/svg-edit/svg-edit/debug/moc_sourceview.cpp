/****************************************************************************
** Meta object code from reading C++ file 'sourceview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../sourceview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sourceview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SourceView_t {
    QByteArrayData data[16];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SourceView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SourceView_t qt_meta_stringdata_SourceView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "SourceView"
QT_MOC_LITERAL(1, 11, 16), // "highlightChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "enabled"
QT_MOC_LITERAL(4, 37, 15), // "wordWrapChanged"
QT_MOC_LITERAL(5, 53, 13), // "sourceChanged"
QT_MOC_LITERAL(6, 67, 17), // "updatedStatusData"
QT_MOC_LITERAL(7, 85, 14), // "statusWithData"
QT_MOC_LITERAL(8, 100, 11), // "setResource"
QT_MOC_LITERAL(9, 112, 15), // "const Resource*"
QT_MOC_LITERAL(10, 128, 8), // "resource"
QT_MOC_LITERAL(11, 137, 15), // "setHighlighting"
QT_MOC_LITERAL(12, 153, 6), // "enable"
QT_MOC_LITERAL(13, 160, 11), // "setWordWrap"
QT_MOC_LITERAL(14, 172, 9), // "selectAll"
QT_MOC_LITERAL(15, 182, 16) // "updateStatusData"

    },
    "SourceView\0highlightChanged\0\0enabled\0"
    "wordWrapChanged\0sourceChanged\0"
    "updatedStatusData\0statusWithData\0"
    "setResource\0const Resource*\0resource\0"
    "setHighlighting\0enable\0setWordWrap\0"
    "selectAll\0updateStatusData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SourceView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    0,   65,    2, 0x06 /* Public */,
       6,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   69,    2, 0x0a /* Public */,
      11,    1,   72,    2, 0x0a /* Public */,
      13,    1,   75,    2, 0x0a /* Public */,
      14,    0,   78,    2, 0x0a /* Public */,
      15,    0,   79,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SourceView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SourceView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->highlightChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->wordWrapChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->sourceChanged(); break;
        case 3: _t->updatedStatusData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setResource((*reinterpret_cast< const Resource*(*)>(_a[1]))); break;
        case 5: _t->setHighlighting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setWordWrap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->selectAll(); break;
        case 8: _t->updateStatusData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SourceView::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SourceView::highlightChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SourceView::*)(bool ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SourceView::wordWrapChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SourceView::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SourceView::sourceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SourceView::*)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SourceView::updatedStatusData)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SourceView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SourceView.data,
    qt_meta_data_SourceView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SourceView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SourceView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SourceView.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SourceView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void SourceView::highlightChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< SourceView *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SourceView::wordWrapChanged(bool _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< SourceView *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SourceView::sourceChanged()const
{
    QMetaObject::activate(const_cast< SourceView *>(this), &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void SourceView::updatedStatusData(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< SourceView *>(this), &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
