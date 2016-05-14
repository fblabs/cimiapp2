/****************************************************************************
** Meta object code from reading C++ file 'cconti.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../cconti.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cconti.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CConti_t {
    QByteArrayData data[8];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CConti_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CConti_t qt_meta_stringdata_CConti = {
    {
QT_MOC_LITERAL(0, 0, 6), // "CConti"
QT_MOC_LITERAL(1, 7, 18), // "on_pbClose_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(4, 51, 4), // "arg1"
QT_MOC_LITERAL(5, 56, 17), // "on_pbSave_clicked"
QT_MOC_LITERAL(6, 74, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 96, 20) // "on_pbAnnulla_clicked"

    },
    "CConti\0on_pbClose_clicked\0\0"
    "on_lineEdit_textChanged\0arg1\0"
    "on_pbSave_clicked\0on_pushButton_clicked\0"
    "on_pbAnnulla_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CConti[] = {

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
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CConti::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CConti *_t = static_cast<CConti *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbClose_clicked(); break;
        case 1: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pbSave_clicked(); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_pbAnnulla_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject CConti::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CConti.data,
      qt_meta_data_CConti,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CConti::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CConti::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CConti.stringdata0))
        return static_cast<void*>(const_cast< CConti*>(this));
    return QWidget::qt_metacast(_clname);
}

int CConti::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
