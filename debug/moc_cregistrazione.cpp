/****************************************************************************
** Meta object code from reading C++ file 'cregistrazione.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cregistrazione.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cregistrazione.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CRegistrazione_t {
    QByteArrayData data[12];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CRegistrazione_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CRegistrazione_t qt_meta_stringdata_CRegistrazione = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CRegistrazione"
QT_MOC_LITERAL(1, 15, 4), // "done"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(4, 45, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(5, 69, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 91, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(7, 115, 12), // "recordTotals"
QT_MOC_LITERAL(8, 128, 22), // "on_cbLiquidato_toggled"
QT_MOC_LITERAL(9, 151, 7), // "checked"
QT_MOC_LITERAL(10, 159, 6), // "reload"
QT_MOC_LITERAL(11, 166, 23) // "on_pushButton_5_clicked"

    },
    "CRegistrazione\0done\0\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_clicked\0"
    "on_pushButton_4_clicked\0recordTotals\0"
    "on_cbLiquidato_toggled\0checked\0reload\0"
    "on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CRegistrazione[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CRegistrazione::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CRegistrazione *_t = static_cast<CRegistrazione *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pushButton_4_clicked(); break;
        case 5: _t->recordTotals(); break;
        case 6: _t->on_cbLiquidato_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->reload(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CRegistrazione::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CRegistrazione::done)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject CRegistrazione::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CRegistrazione.data,
      qt_meta_data_CRegistrazione,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CRegistrazione::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CRegistrazione::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CRegistrazione.stringdata0))
        return static_cast<void*>(const_cast< CRegistrazione*>(this));
    return QWidget::qt_metacast(_clname);
}

int CRegistrazione::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CRegistrazione::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
