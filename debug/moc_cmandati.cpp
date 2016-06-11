/****************************************************************************
** Meta object code from reading C++ file 'cmandati.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cmandati.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cmandati.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CMandati_t {
    QByteArrayData data[15];
    char stringdata[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CMandati_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CMandati_t qt_meta_stringdata_CMandati = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 22),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 4),
QT_MOC_LITERAL(4, 38, 11),
QT_MOC_LITERAL(5, 50, 17),
QT_MOC_LITERAL(6, 68, 21),
QT_MOC_LITERAL(7, 90, 23),
QT_MOC_LITERAL(8, 114, 23),
QT_MOC_LITERAL(9, 138, 10),
QT_MOC_LITERAL(10, 149, 13),
QT_MOC_LITERAL(11, 163, 23),
QT_MOC_LITERAL(12, 187, 19),
QT_MOC_LITERAL(13, 207, 13),
QT_MOC_LITERAL(14, 221, 13)
    },
    "CMandati\0on_sbYear_valueChanged\0\0arg1\0"
    "loadMandato\0editRegistrazione\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0getImporto\0"
    "stampaMandato\0on_pushButton_4_clicked\0"
    "on_pbDelete_clicked\0deleteMandato\0"
    "reloadMandati"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CMandati[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    0,   77,    2, 0x08 /* Private */,
       5,    0,   78,    2, 0x08 /* Private */,
       6,    0,   79,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    0,   86,    2, 0x08 /* Private */,
      14,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CMandati::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CMandati *_t = static_cast<CMandati *>(_o);
        switch (_id) {
        case 0: _t->on_sbYear_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->loadMandato(); break;
        case 2: _t->editRegistrazione(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        case 6: _t->getImporto(); break;
        case 7: _t->stampaMandato(); break;
        case 8: _t->on_pushButton_4_clicked(); break;
        case 9: _t->on_pbDelete_clicked(); break;
        case 10: _t->deleteMandato(); break;
        case 11: _t->reloadMandati(); break;
        default: ;
        }
    }
}

const QMetaObject CMandati::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CMandati.data,
      qt_meta_data_CMandati,  qt_static_metacall, 0, 0}
};


const QMetaObject *CMandati::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CMandati::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMandati.stringdata))
        return static_cast<void*>(const_cast< CMandati*>(this));
    return QWidget::qt_metacast(_clname);
}

int CMandati::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
