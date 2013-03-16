/****************************************************************************
** Meta object code from reading C++ file 'edumdesktop.h'
**
** Created: Thu Jul 5 01:38:28 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "edumdesktop.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edumdesktop.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_eduMDesktop[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      39,   12,   12,   12, 0x0a,
      60,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_eduMDesktop[] = {
    "eduMDesktop\0\0categorySelected(QString)\0"
    "appSelected(QString)\0showTime()\0"
};

const QMetaObject eduMDesktop::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_eduMDesktop,
      qt_meta_data_eduMDesktop, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &eduMDesktop::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *eduMDesktop::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *eduMDesktop::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_eduMDesktop))
        return static_cast<void*>(const_cast< eduMDesktop*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int eduMDesktop::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: categorySelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: appSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: showTime(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
