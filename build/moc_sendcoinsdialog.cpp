/****************************************************************************
** Meta object code from reading C++ file 'sendcoinsdialog.h'
**
** Created: Sat Feb 8 18:27:13 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/sendcoinsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendcoinsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendCoinsDialog[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      25,   16,   16,   16, 0x0a,
      34,   16,   16,   16, 0x0a,
      59,   16,   43,   16, 0x0a,
      70,   16,   16,   16, 0x0a,
     135,   92,   16,   16, 0x0a,
     168,   16,   16,   16, 0x08,
     198,  192,   16,   16, 0x08,
     227,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SendCoinsDialog[] = {
    "SendCoinsDialog\0\0clear()\0reject()\0"
    "accept()\0SendCoinsEntry*\0addEntry()\0"
    "updateRemoveEnabled()\0"
    "balance,unconfirmedBalance,immatureBalance\0"
    "setBalance(qint64,qint64,qint64)\0"
    "on_sendButton_clicked()\0entry\0"
    "removeEntry(SendCoinsEntry*)\0"
    "updateDisplayUnit()\0"
};

const QMetaObject SendCoinsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SendCoinsDialog,
      qt_meta_data_SendCoinsDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SendCoinsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SendCoinsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SendCoinsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendCoinsDialog))
        return static_cast<void*>(const_cast< SendCoinsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SendCoinsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clear(); break;
        case 1: reject(); break;
        case 2: accept(); break;
        case 3: { SendCoinsEntry* _r = addEntry();
            if (_a[0]) *reinterpret_cast< SendCoinsEntry**>(_a[0]) = _r; }  break;
        case 4: updateRemoveEnabled(); break;
        case 5: setBalance((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 6: on_sendButton_clicked(); break;
        case 7: removeEntry((*reinterpret_cast< SendCoinsEntry*(*)>(_a[1]))); break;
        case 8: updateDisplayUnit(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
