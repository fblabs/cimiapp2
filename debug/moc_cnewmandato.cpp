/****************************************************************************
** Meta object code from reading C++ file 'cnewmandato.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cnewmandato.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cnewmandato.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CNewMandato_t {
    QByteArrayData data[8];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CNewMandato_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CNewMandato_t qt_meta_stringdata_CNewMandato = {
    {
QT_MOC_LITERAL(0, 0, 11), // "CNewMandato"
QT_MOC_LITERAL(1, 12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "getImporto"
QT_MOC_LITERAL(4, 46, 16), // "setRegsDateRange"
QT_MOC_LITERAL(5, 63, 11), // "saveMandato"
QT_MOC_LITERAL(6, 75, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(7, 99, 10) // "getBancaID"

    },
    "CNewMandato\0on_pushButton_clicked\0\0"
    "getImporto\0setRegsDateRange\0saveMandato\0"
    "on_pushButton_2_clicked\0getBancaID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CNewMandato[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Int,

       0        // eod
};

void CNewMandato::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CNewMandato *_t = static_cast<CNewMandato *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->getImporto(); break;
        case 2: _t->setRegsDateRange(); break;
        case 3: { bool _r = _t->saveMandato();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: { int _r = _t->getBancaID();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObject CNewMandato::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CNewMandato.data,
      qt_meta_data_CNewMandato,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CNewMandato::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CNewMandato::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CNewMandato.stringdata0))
        return static_cast<void*>(const_cast< CNewMandato*>(this));
    return QWidget::qt_metacast(_clname);
}

int CNewMandato::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
