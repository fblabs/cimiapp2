/****************************************************************************
** Meta object code from reading C++ file 'coperations.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../coperations.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coperations.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_COperations_t {
    QByteArrayData data[16];
    char stringdata[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_COperations_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_COperations_t qt_meta_stringdata_COperations = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 20),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 4),
QT_MOC_LITERAL(4, 39, 19),
QT_MOC_LITERAL(5, 59, 21),
QT_MOC_LITERAL(6, 81, 23),
QT_MOC_LITERAL(7, 105, 23),
QT_MOC_LITERAL(8, 129, 6),
QT_MOC_LITERAL(9, 136, 17),
QT_MOC_LITERAL(10, 154, 23),
QT_MOC_LITERAL(11, 178, 5),
QT_MOC_LITERAL(12, 184, 23),
QT_MOC_LITERAL(13, 208, 4),
QT_MOC_LITERAL(14, 213, 36),
QT_MOC_LITERAL(15, 250, 3)
    },
    "COperations\0on_deDal_dateChanged\0\0"
    "date\0on_deAl_dateChanged\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "reload\0showRegistrazione\0"
    "on_tvMain_doubleClicked\0index\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_tvMain_customContextMenuRequested\0"
    "pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_COperations[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x08 /* Private */,
       4,    1,   67,    2, 0x08 /* Private */,
       5,    0,   70,    2, 0x08 /* Private */,
       6,    0,   71,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      12,    1,   78,    2, 0x08 /* Private */,
      14,    1,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QPoint,   15,

       0        // eod
};

void COperations::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        COperations *_t = static_cast<COperations *>(_o);
        switch (_id) {
        case 0: _t->on_deDal_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->on_deAl_dateChanged((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->reload(); break;
        case 6: _t->showRegistrazione(); break;
        case 7: _t->on_tvMain_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 8: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_tvMain_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject COperations::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_COperations.data,
      qt_meta_data_COperations,  qt_static_metacall, 0, 0}
};


const QMetaObject *COperations::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *COperations::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_COperations.stringdata))
        return static_cast<void*>(const_cast< COperations*>(this));
    return QWidget::qt_metacast(_clname);
}

int COperations::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
