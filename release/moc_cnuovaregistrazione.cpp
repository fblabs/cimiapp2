/****************************************************************************
** Meta object code from reading C++ file 'cnuovaregistrazione.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cnuovaregistrazione.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cnuovaregistrazione.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CNuovaRegistrazione_t {
    QByteArrayData data[8];
    char stringdata[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CNuovaRegistrazione_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CNuovaRegistrazione_t qt_meta_stringdata_CNuovaRegistrazione = {
    {
QT_MOC_LITERAL(0, 0, 19),
QT_MOC_LITERAL(1, 20, 38),
QT_MOC_LITERAL(2, 59, 0),
QT_MOC_LITERAL(3, 60, 5),
QT_MOC_LITERAL(4, 66, 36),
QT_MOC_LITERAL(5, 103, 23),
QT_MOC_LITERAL(6, 127, 21),
QT_MOC_LITERAL(7, 149, 23)
    },
    "CNuovaRegistrazione\0"
    "on_cbCpSottogruppo_currentIndexChanged\0"
    "\0index\0on_cbSottogruppo_currentIndexChanged\0"
    "on_pushButton_4_clicked\0on_pushButton_clicked\0"
    "on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CNuovaRegistrazione[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       4,    1,   42,    2, 0x08 /* Private */,
       5,    0,   45,    2, 0x08 /* Private */,
       6,    0,   46,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CNuovaRegistrazione::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CNuovaRegistrazione *_t = static_cast<CNuovaRegistrazione *>(_o);
        switch (_id) {
        case 0: _t->on_cbCpSottogruppo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_cbSottogruppo_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CNuovaRegistrazione::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CNuovaRegistrazione.data,
      qt_meta_data_CNuovaRegistrazione,  qt_static_metacall, 0, 0}
};


const QMetaObject *CNuovaRegistrazione::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CNuovaRegistrazione::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CNuovaRegistrazione.stringdata))
        return static_cast<void*>(const_cast< CNuovaRegistrazione*>(this));
    return QWidget::qt_metacast(_clname);
}

int CNuovaRegistrazione::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
