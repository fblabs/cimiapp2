/****************************************************************************
** Meta object code from reading C++ file 'cnuovariga.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cnuovariga.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cnuovariga.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CNuovaRiga_t {
    QByteArrayData data[10];
    char stringdata[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CNuovaRiga_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CNuovaRiga_t qt_meta_stringdata_CNuovaRiga = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 8),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 10),
QT_MOC_LITERAL(4, 32, 14),
QT_MOC_LITERAL(5, 47, 7),
QT_MOC_LITERAL(6, 55, 17),
QT_MOC_LITERAL(7, 73, 7),
QT_MOC_LITERAL(8, 81, 23),
QT_MOC_LITERAL(9, 105, 21)
    },
    "CNuovaRiga\0rowAdded\0\0rowDeleted\0"
    "on_rbE_toggled\0checked\0on_pbCalc_clicked\0"
    "setupUI\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CNuovaRiga[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   51,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CNuovaRiga::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CNuovaRiga *_t = static_cast<CNuovaRiga *>(_o);
        switch (_id) {
        case 0: _t->rowAdded(); break;
        case 1: _t->rowDeleted(); break;
        case 2: _t->on_rbE_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_pbCalc_clicked(); break;
        case 4: _t->setupUI(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CNuovaRiga::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNuovaRiga::rowAdded)) {
                *result = 0;
            }
        }
        {
            typedef void (CNuovaRiga::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNuovaRiga::rowDeleted)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject CNuovaRiga::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CNuovaRiga.data,
      qt_meta_data_CNuovaRiga,  qt_static_metacall, 0, 0}
};


const QMetaObject *CNuovaRiga::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CNuovaRiga::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CNuovaRiga.stringdata))
        return static_cast<void*>(const_cast< CNuovaRiga*>(this));
    return QWidget::qt_metacast(_clname);
}

int CNuovaRiga::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CNuovaRiga::rowAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CNuovaRiga::rowDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
