/****************************************************************************
** Meta object code from reading C++ file 'hzKB.h'
**
** Created: Mon Apr 29 15:24:58 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/hzKB.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hzKB.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Nut__hzKB[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   38,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Nut__hzKB[] = {
    "Nut::hzKB\0\0pinyin\0sendPinyin(QString)\0"
    "buttonID\0buttonClickResponse(int)\0"
};

void Nut::hzKB::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        hzKB *_t = static_cast<hzKB *>(_o);
        switch (_id) {
        case 0: _t->sendPinyin((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->buttonClickResponse((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Nut::hzKB::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Nut::hzKB::staticMetaObject = {
    { &IKeyboard::staticMetaObject, qt_meta_stringdata_Nut__hzKB,
      qt_meta_data_Nut__hzKB, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Nut::hzKB::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Nut::hzKB::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Nut::hzKB::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Nut__hzKB))
        return static_cast<void*>(const_cast< hzKB*>(this));
    return IKeyboard::qt_metacast(_clname);
}

int Nut::hzKB::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IKeyboard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Nut::hzKB::sendPinyin(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
