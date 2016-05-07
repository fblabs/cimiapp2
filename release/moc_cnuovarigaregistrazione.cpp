/****************************************************************************
** Meta object code from reading C++ file 'cnuovarigaregistrazione.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cnuovarigaregistrazione.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cnuovarigaregistrazione.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CNuovaRigaRegistrazione_t {
    QByteArrayData data[11];
    char stringdata[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CNuovaRigaRegistrazione_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CNuovaRigaRegistrazione_t qt_meta_stringdata_CNuovaRigaRegistrazione = {
    {
QT_MOC_LITERAL(0, 0, 23),
QT_MOC_LITERAL(1, 24, 6),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 14),
QT_MOC_LITERAL(4, 47, 7),
QT_MOC_LITERAL(5, 55, 17),
QT_MOC_LITERAL(6, 73, 7),
QT_MOC_LITERAL(7, 81, 23),
QT_MOC_LITERAL(8, 105, 21),
QT_MOC_LITERAL(9, 127, 23),
QT_MOC_LITERAL(10, 151, 23)
    },
    "CNuovaRigaRegistrazione\0nrdone\0\0"
    "on_rbE_toggled\0checked\0on_pbCalc_clicked\0"
    "setupUI\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CNuovaRigaRegistrazione[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    0,   59,    2, 0x08 /* Private */,
       7,    0,   60,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
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
        switch (_id) {
        case 0: _t->nrdone(); break;
        case 1: _t->on_rbE_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_pbCalc_clicked(); break;
        case 3: _t->setupUI(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_clicked(); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
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
      qt_meta_data_CNuovaRigaRegistrazione,  qt_static_metacall, 0, 0}
};


const QMetaObject *CNuovaRigaRegistrazione::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CNuovaRigaRegistrazione::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CNuovaRigaRegistrazione.stringdata))
        return static_cast<void*>(const_cast< CNuovaRigaRegistrazione*>(this));
    return QWidget::qt_metacast(_clname);
}

int CNuovaRigaRegistrazione::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CNuovaRigaRegistrazione::nrdone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
