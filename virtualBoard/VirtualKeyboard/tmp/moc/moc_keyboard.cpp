/****************************************************************************
** Meta object code from reading C++ file 'keyboard.h'
**
** Created: Thu Apr 18 15:39:21 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/keyboard.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Keyboard[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      33,   28,    9,    9, 0x08,
      66,    9,    9,    9, 0x08,
      94,    9,    9,    9, 0x08,
     121,    9,    9,    9, 0x08,
     150,    9,    9,    9, 0x08,
     173,    9,    9,    9, 0x08,
     195,    9,    9,    9, 0x08,
     220,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Keyboard[] = {
    "Keyboard\0\0keyboardHandler()\0arg1\0"
    "on_lineEdit_textChanged(QString)\0"
    "on_lineEdit_returnPressed()\0"
    "on_key_Big_small_clicked()\0"
    "on_key_Symbol_char_clicked()\0"
    "on_key_clean_clicked()\0on_key_Back_clicked()\0"
    "on_key_Confirm_clicked()\0"
    "on_key_Cancel_clicked()\0"
};

void Keyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Keyboard *_t = static_cast<Keyboard *>(_o);
        switch (_id) {
        case 0: _t->keyboardHandler(); break;
        case 1: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_returnPressed(); break;
        case 3: _t->on_key_Big_small_clicked(); break;
        case 4: _t->on_key_Symbol_char_clicked(); break;
        case 5: _t->on_key_clean_clicked(); break;
        case 6: _t->on_key_Back_clicked(); break;
        case 7: _t->on_key_Confirm_clicked(); break;
        case 8: _t->on_key_Cancel_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Keyboard::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Keyboard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Keyboard,
      qt_meta_data_Keyboard, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Keyboard::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Keyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Keyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Keyboard))
        return static_cast<void*>(const_cast< Keyboard*>(this));
    return QWidget::qt_metacast(_clname);
}

int Keyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
