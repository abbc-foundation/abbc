/****************************************************************************
** Meta object code from reading C++ file 'bitcoingui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/bitcoingui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bitcoingui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BitcoinGUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,
      60,   41,   11,   11, 0x0a,
      89,   82,   11,   11, 0x0a,
     134,  114,   11,   11, 0x0a,
     182,  162,   11,   11, 0x0a,
     210,  203,   11,   11, 0x0a,
     229,   11,   11,   11, 0x08,
     248,   11,   11,   11, 0x08,
     269,   11,   11,   11, 0x08,
     288,   11,   11,   11, 0x08,
     303,   11,   11,   11, 0x08,
     321,   11,   11,   11, 0x08,
     343,   11,   11,   11, 0x08,
     366,   11,   11,   11, 0x08,
     391,  386,   11,   11, 0x08,
     419,   11,   11,   11, 0x28,
     440,  386,   11,   11, 0x08,
     470,   11,   11,   11, 0x28,
     493,   11,   11,   11, 0x08,
     511,   11,   11,   11, 0x08,
     528,   11,   11,   11, 0x08,
     550,  543,   11,   11, 0x08,
     620,  603,   11,   11, 0x08,
     661,   82,   11,   11, 0x08,
     681,   11,   11,   11, 0x08,
     695,   11,   11,   11, 0x08,
     710,   11,   11,   11, 0x08,
     725,   11,   11,   11, 0x08,
     744,   11,   11,   11, 0x08,
     757,   11,   11,   11, 0x08,
     776,   11,   11,   11, 0x08,
     791,   11,   11,   11, 0x08,
     827,  813,   11,   11, 0x08,
     855,   11,   11,   11, 0x28,
     879,   11,   11,   11, 0x08,
     894,   11,   11,   11, 0x08,
     914,   11,   11,   11, 0x08,
     937,  386,   11,   11, 0x08,
     961,   11,   11,   11, 0x28,
     984,  978,   11,   11, 0x08,
    1005,  978,   11,   11, 0x08,
    1031, 1024,   11,   11, 0x08,
    1058, 1056,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BitcoinGUI[] = {
    "BitcoinGUI\0\0count\0setNumConnections(int)\0"
    "count,nTotalBlocks\0setNumBlocks(int,int)\0"
    "status\0setEncryptionStatus(int)\0"
    "title,message,modal\0error(QString,QString,bool)\0"
    "nFeeRequired,payFee\0askFee(qint64,bool*)\0"
    "strURI\0handleURI(QString)\0gotoOverviewPage()\0"
    "gotoStatisticsPage()\0gotoBlockBrowser()\0"
    "gotoChatPage()\0gotoHistoryPage()\0"
    "gotoAddressBookPage()\0gotoReceiveCoinsPage()\0"
    "gotoSendCoinsPage()\0addr\0"
    "gotoSignMessageTab(QString)\0"
    "gotoSignMessageTab()\0gotoVerifyMessageTab(QString)\0"
    "gotoVerifyMessageTab()\0lockIconClicked()\0"
    "optionsClicked()\0aboutClicked()\0reason\0"
    "trayIconActivated(QSystemTrayIcon::ActivationReason)\0"
    "parent,start,end\0"
    "incomingTransaction(QModelIndex,int,int)\0"
    "encryptWallet(bool)\0checkWallet()\0"
    "repairWallet()\0backupWallet()\0"
    "changePassphrase()\0lockWallet()\0"
    "lockWalletToggle()\0unlockWallet()\0"
    "unlockWalletForMint()\0fToggleHidden\0"
    "showNormalIfMinimized(bool)\0"
    "showNormalIfMinimized()\0toggleHidden()\0"
    "updateMintingIcon()\0updateMintingWeights()\0"
    "charityClicked(QString)\0charityClicked()\0"
    "theme\0changeTheme(QString)\0"
    "loadTheme(QString)\0themes\0"
    "listThemes(QStringList&)\0e\0"
    "keyPressEvent(QKeyEvent*)\0"
};

void BitcoinGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BitcoinGUI *_t = static_cast<BitcoinGUI *>(_o);
        switch (_id) {
        case 0: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->setEncryptionStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->error((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->askFee((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< bool*(*)>(_a[2]))); break;
        case 5: _t->handleURI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->gotoOverviewPage(); break;
        case 7: _t->gotoStatisticsPage(); break;
        case 8: _t->gotoBlockBrowser(); break;
        case 9: _t->gotoChatPage(); break;
        case 10: _t->gotoHistoryPage(); break;
        case 11: _t->gotoAddressBookPage(); break;
        case 12: _t->gotoReceiveCoinsPage(); break;
        case 13: _t->gotoSendCoinsPage(); break;
        case 14: _t->gotoSignMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->gotoSignMessageTab(); break;
        case 16: _t->gotoVerifyMessageTab((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->gotoVerifyMessageTab(); break;
        case 18: _t->lockIconClicked(); break;
        case 19: _t->optionsClicked(); break;
        case 20: _t->aboutClicked(); break;
        case 21: _t->trayIconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 22: _t->incomingTransaction((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 23: _t->encryptWallet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->checkWallet(); break;
        case 25: _t->repairWallet(); break;
        case 26: _t->backupWallet(); break;
        case 27: _t->changePassphrase(); break;
        case 28: _t->lockWallet(); break;
        case 29: _t->lockWalletToggle(); break;
        case 30: _t->unlockWallet(); break;
        case 31: _t->unlockWalletForMint(); break;
        case 32: _t->showNormalIfMinimized((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->showNormalIfMinimized(); break;
        case 34: _t->toggleHidden(); break;
        case 35: _t->updateMintingIcon(); break;
        case 36: _t->updateMintingWeights(); break;
        case 37: _t->charityClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->charityClicked(); break;
        case 39: _t->changeTheme((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 40: _t->loadTheme((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 41: _t->listThemes((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 42: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BitcoinGUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BitcoinGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_BitcoinGUI,
      qt_meta_data_BitcoinGUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BitcoinGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BitcoinGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BitcoinGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BitcoinGUI))
        return static_cast<void*>(const_cast< BitcoinGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int BitcoinGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
