/****************************************************************************
** Meta object code from reading C++ file 'DigitalInputPanel.h'
**
** Created: Fri Apr 26 17:15:15 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/DigitalInputPanel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DigitalInputPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SDL__DigitalInputPanel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      29,   24,   23,   23, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   23,   23,   23, 0x08,
      75,   73,   23,   23, 0x08,
     108,   23,   23,   23, 0x08,
     134,   23,   23,   23, 0x08,
     162,   23,   23,   23, 0x08,
     190,   23,   23,   23, 0x08,
     219,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SDL__DigitalInputPanel[] = {
    "SDL::DigitalInputPanel\0\0text\0"
    "sigInputDigitalText(QString)\0"
    "focusChanged()\0w\0onDigitalButtonClicked(QWidget*)\0"
    "onPanelButtonDelClicked()\0"
    "onPanelButtonEnterClicked()\0"
    "onPanelButtonSpaceClicked()\0"
    "onPanelButtonSymbolClicked()\0"
    "onPanelButtonCapsClicked()\0"
};

void SDL::DigitalInputPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DigitalInputPanel *_t = static_cast<DigitalInputPanel *>(_o);
        switch (_id) {
        case 0: _t->sigInputDigitalText((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->focusChanged(); break;
        case 2: _t->onDigitalButtonClicked((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->onPanelButtonDelClicked(); break;
        case 4: _t->onPanelButtonEnterClicked(); break;
        case 5: _t->onPanelButtonSpaceClicked(); break;
        case 6: _t->onPanelButtonSymbolClicked(); break;
        case 7: _t->onPanelButtonCapsClicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SDL::DigitalInputPanel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SDL::DigitalInputPanel::staticMetaObject = {
    { &IKeyboard::staticMetaObject, qt_meta_stringdata_SDL__DigitalInputPanel,
      qt_meta_data_SDL__DigitalInputPanel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SDL::DigitalInputPanel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SDL::DigitalInputPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SDL::DigitalInputPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SDL__DigitalInputPanel))
        return static_cast<void*>(const_cast< DigitalInputPanel*>(this));
    return IKeyboard::qt_metacast(_clname);
}

int SDL::DigitalInputPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = IKeyboard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SDL::DigitalInputPanel::sigInputDigitalText(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
