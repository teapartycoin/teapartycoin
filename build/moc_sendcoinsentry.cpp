/****************************************************************************
** Meta object code from reading C++ file 'sendcoinsentry.h'
**
** Created: Sat Feb 8 18:27:20 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/sendcoinsentry.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendcoinsentry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendCoinsEntry[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      59,   51,   15,   15, 0x0a,
      82,   15,   15,   15, 0x0a,
      90,   15,   15,   15, 0x08,
     124,  116,   15,   15, 0x08,
     154,   15,   15,   15, 0x08,
     185,   15,   15,   15, 0x08,
     210,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SendCoinsEntry[] = {
    "SendCoinsEntry\0\0entry\0"
    "removeEntry(SendCoinsEntry*)\0enabled\0"
    "setRemoveEnabled(bool)\0clear()\0"
    "on_deleteButton_clicked()\0address\0"
    "on_payTo_textChanged(QString)\0"
    "on_addressBookButton_clicked()\0"
    "on_pasteButton_clicked()\0updateDisplayUnit()\0"
};

const QMetaObject SendCoinsEntry::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_SendCoinsEntry,
      qt_meta_data_SendCoinsEntry, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SendCoinsEntry::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SendCoinsEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SendCoinsEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendCoinsEntry))
        return static_cast<void*>(const_cast< SendCoinsEntry*>(this));
    return QFrame::qt_metacast(_clname);
}

int SendCoinsEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: removeEntry((*reinterpret_cast< SendCoinsEntry*(*)>(_a[1]))); break;
        case 1: setRemoveEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: clear(); break;
        case 3: on_deleteButton_clicked(); break;
        case 4: on_payTo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: on_addressBookButton_clicked(); break;
        case 6: on_pasteButton_clicked(); break;
        case 7: updateDisplayUnit(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void SendCoinsEntry::removeEntry(SendCoinsEntry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
