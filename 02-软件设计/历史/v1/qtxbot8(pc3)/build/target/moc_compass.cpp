/****************************************************************************
** Meta object code from reading C++ file 'compass.h'
**
** Created: Tue Jul 24 16:24:00 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/compass.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Compass[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,    9,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Compass[] = {
    "Compass\0\0flag\0setlightflag(bool)\0"
};

const QMetaObject Compass::staticMetaObject = {
    { &AbstractMeter::staticMetaObject, qt_meta_stringdata_Compass,
      qt_meta_data_Compass, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Compass::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Compass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Compass::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Compass))
        return static_cast<void*>(const_cast< Compass*>(this));
    return AbstractMeter::qt_metacast(_clname);
}

int Compass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractMeter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setlightflag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
