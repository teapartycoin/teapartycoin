/****************************************************************************
** Meta object code from reading C++ file 'walletmodel.h'
**
** Created: Sat Feb 8 18:27:19 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/walletmodel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walletmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WalletModel[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      56,   13,   12,   12, 0x05,
      99,   93,   12,   12, 0x05,
     134,  127,   12,   12, 0x05,
     163,   12,   12,   12, 0x05,
     199,  179,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     227,   12,   12,   12, 0x0a,
     254,  242,   12,   12, 0x0a,
     313,  285,   12,   12, 0x0a,
     357,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WalletModel[] = {
    "WalletModel\0\0balance,unconfirmedBalance,immatureBalance\0"
    "balanceChanged(qint64,qint64,qint64)\0"
    "count\0numTransactionsChanged(int)\0"
    "status\0encryptionStatusChanged(int)\0"
    "requireUnlock()\0title,message,modal\0"
    "error(QString,QString,bool)\0updateStatus()\0"
    "hash,status\0updateTransaction(QString,int)\0"
    "address,label,isMine,status\0"
    "updateAddressBook(QString,QString,bool,int)\0"
    "pollBalanceChanged()\0"
};

const QMetaObject WalletModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WalletModel,
      qt_meta_data_WalletModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WalletModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WalletModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WalletModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WalletModel))
        return static_cast<void*>(const_cast< WalletModel*>(this));
    return QObject::qt_metacast(_clname);
}

int WalletModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: balanceChanged((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 1: numTransactionsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: encryptionStatusChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: requireUnlock(); break;
        case 4: error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: updateStatus(); break;
        case 6: updateTransaction((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: updateAddressBook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 8: pollBalanceChanged(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WalletModel::balanceChanged(qint64 _t1, qint64 _t2, qint64 _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WalletModel::numTransactionsChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WalletModel::encryptionStatusChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WalletModel::requireUnlock()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void WalletModel::error(const QString & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
