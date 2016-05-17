/****************************************************************************
** Meta object code from reading C++ file 'cnuovarigaregistrazione.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cnuovarigaregistrazione.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cnuovarigaregistrazione.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CNuovaRigaRegistrazione_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CNuovaRigaRegistrazione_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CNuovaRigaRegistrazione_t qt_meta_stringdata_CNuovaRigaRegistrazione = {
    {
QT_MOC_LITERAL(0, 0, 23), // "CNuovaRigaRegistrazione"
QT_MOC_LITERAL(1, 24, 6), // "nrdone"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 14), // "on_rbE_toggled"
QT_MOC_LITERAL(4, 47, 7), // "checked"
QT_MOC_LITERAL(5, 55, 17), // "on_pbCalc_clicked"
QT_MOC_LITERAL(6, 73, 7), // "setupUI"
QT_MOC_LITERAL(7, 81, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 105, 21) // "on_pushButton_clicked"

    },
    "CNuovaRigaRegistrazione\0nrdone\0\0"
    "on_rbE_toggled\0checked\0on_pbCalc_clicked\0"
    "setupUI\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CNuovaRigaRegistrazione[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   45,    2, 0x08 /* Private */,
       5,    0,   48,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CNuovaRigaRegistrazione::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CNuovaRigaRegistrazione *_t = static_cast<CNuovaRigaRegistrazione *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nrdone(); break;
        case 1: _t->on_rbE_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_pbCalc_clicked(); break;
        case 3: _t->setupUI(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CNuovaRigaRegistrazione::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNuovaRigaRegistrazione::nrdone)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CNuovaRigaRegistrazione::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CNuovaRigaRegistrazione.data,
      qt_meta_data_CNuovaRigaRegistrazione,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CNuovaRigaRegistrazione::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CNuovaRigaRegistrazione::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CNuovaRigaRegistrazione.stringdata0))
        return static_cast<void*>(const_cast< CNuovaRigaRegistrazione*>(this));
    return QWidget::qt_metacast(_clname);
}

int CNuovaRigaRegistrazione::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void CNuovaRigaRegistrazione::nrdone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
