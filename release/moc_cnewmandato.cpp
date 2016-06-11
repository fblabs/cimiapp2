/****************************************************************************
** Meta object code from reading C++ file 'cnewmandato.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cnewmandato.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cnewmandato.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CNewMandato_t {
    QByteArrayData data[9];
    char stringdata[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CNewMandato_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CNewMandato_t qt_meta_stringdata_CNewMandato = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 14),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 21),
QT_MOC_LITERAL(4, 50, 10),
QT_MOC_LITERAL(5, 61, 16),
QT_MOC_LITERAL(6, 78, 11),
QT_MOC_LITERAL(7, 90, 23),
QT_MOC_LITERAL(8, 114, 10)
    },
    "CNewMandato\0mandatoCreated\0\0"
    "on_pushButton_clicked\0getImporto\0"
    "setRegsDateRange\0saveMandato\0"
    "on_pushButton_2_clicked\0getBancaID"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CNewMandato[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

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
        switch (_id) {
        case 0: _t->mandatoCreated(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->getImporto(); break;
        case 3: _t->setRegsDateRange(); break;
        case 4: { bool _r = _t->saveMandato();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: { int _r = _t->getBancaID();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CNewMandato::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CNewMandato::mandatoCreated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CNewMandato::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CNewMandato.data,
      qt_meta_data_CNewMandato,  qt_static_metacall, 0, 0}
};


const QMetaObject *CNewMandato::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CNewMandato::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CNewMandato.stringdata))
        return static_cast<void*>(const_cast< CNewMandato*>(this));
    return QWidget::qt_metacast(_clname);
}

int CNewMandato::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CNewMandato::mandatoCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
