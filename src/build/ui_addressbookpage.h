/********************************************************************************
** Form generated from reading UI file 'addressbookpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOKPAGE_H
#define UI_ADDRESSBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelExplanation;
    QTableView *tableView;
    QCheckBox *deleteCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *newAddressButton;
    QPushButton *copyToClipboard;
    QPushButton *showQRCode;
    QPushButton *signMessage;
    QPushButton *verifyMessage;
    QPushButton *deleteButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *AddressBookPage)
    {
        if (AddressBookPage->objectName().isEmpty())
            AddressBookPage->setObjectName(QString::fromUtf8("AddressBookPage"));
        AddressBookPage->resize(821, 380);
        verticalLayout = new QVBoxLayout(AddressBookPage);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelExplanation = new QLabel(AddressBookPage);
        labelExplanation->setObjectName(QString::fromUtf8("labelExplanation"));
        labelExplanation->setTextFormat(Qt::PlainText);
        labelExplanation->setWordWrap(true);

        verticalLayout->addWidget(labelExplanation);

        tableView = new QTableView(AddressBookPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setContextMenuPolicy(Qt::CustomContextMenu);
        tableView->setTabKeyNavigation(false);
        tableView->setAlternatingRowColors(true);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setSortingEnabled(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(tableView);

        deleteCheckBox = new QCheckBox(AddressBookPage);
        deleteCheckBox->setObjectName(QString::fromUtf8("deleteCheckBox"));

        verticalLayout->addWidget(deleteCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        newAddressButton = new QPushButton(AddressBookPage);
        newAddressButton->setObjectName(QString::fromUtf8("newAddressButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        newAddressButton->setIcon(icon);

        horizontalLayout->addWidget(newAddressButton);

        copyToClipboard = new QPushButton(AddressBookPage);
        copyToClipboard->setObjectName(QString::fromUtf8("copyToClipboard"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/editcopy"), QSize(), QIcon::Normal, QIcon::Off);
        copyToClipboard->setIcon(icon1);

        horizontalLayout->addWidget(copyToClipboard);

        showQRCode = new QPushButton(AddressBookPage);
        showQRCode->setObjectName(QString::fromUtf8("showQRCode"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/qrcode"), QSize(), QIcon::Normal, QIcon::Off);
        showQRCode->setIcon(icon2);

        horizontalLayout->addWidget(showQRCode);

        signMessage = new QPushButton(AddressBookPage);
        signMessage->setObjectName(QString::fromUtf8("signMessage"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/edit"), QSize(), QIcon::Normal, QIcon::Off);
        signMessage->setIcon(icon3);

        horizontalLayout->addWidget(signMessage);

        verifyMessage = new QPushButton(AddressBookPage);
        verifyMessage->setObjectName(QString::fromUtf8("verifyMessage"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/transaction_0"), QSize(), QIcon::Normal, QIcon::Off);
        verifyMessage->setIcon(icon4);

        horizontalLayout->addWidget(verifyMessage);

        deleteButton = new QPushButton(AddressBookPage);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon5);

        horizontalLayout->addWidget(deleteButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(AddressBookPage);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddressBookPage);

        QMetaObject::connectSlotsByName(AddressBookPage);
    } // setupUi

    void retranslateUi(QWidget *AddressBookPage)
    {
        AddressBookPage->setWindowTitle(QApplication::translate("AddressBookPage", "Address Book", nullptr));
        labelExplanation->setText(QApplication::translate("AddressBookPage", "These are your ABBCCoin addresses for receiving payments. You may want to give a different one to each sender so you can keep track of who is paying you.", nullptr));
#ifndef QT_NO_TOOLTIP
        tableView->setToolTip(QApplication::translate("AddressBookPage", "Double-click to edit address or label", nullptr));
#endif // QT_NO_TOOLTIP
        deleteCheckBox->setText(QApplication::translate("AddressBookPage", "Enable Deletion of Receiving Address - WARNING YOU WILL LOSE KEYS TO ANY COINS AT THE ADDRESS, BACK UP WALLET FIRST!", nullptr));
#ifndef QT_NO_TOOLTIP
        newAddressButton->setToolTip(QApplication::translate("AddressBookPage", "Create a new address", nullptr));
#endif // QT_NO_TOOLTIP
        newAddressButton->setText(QApplication::translate("AddressBookPage", "&New Address", nullptr));
#ifndef QT_NO_TOOLTIP
        copyToClipboard->setToolTip(QApplication::translate("AddressBookPage", "Copy the currently selected address to the system clipboard", nullptr));
#endif // QT_NO_TOOLTIP
        copyToClipboard->setText(QApplication::translate("AddressBookPage", "&Copy Address", nullptr));
        showQRCode->setText(QApplication::translate("AddressBookPage", "Show &QR Code", nullptr));
#ifndef QT_NO_TOOLTIP
        signMessage->setToolTip(QApplication::translate("AddressBookPage", "Sign a message to prove you own a ABBCCoin address", nullptr));
#endif // QT_NO_TOOLTIP
        signMessage->setText(QApplication::translate("AddressBookPage", "Sign &Message", nullptr));
#ifndef QT_NO_TOOLTIP
        verifyMessage->setToolTip(QApplication::translate("AddressBookPage", "Verify a message to ensure it was signed with a specified ABBCCoin address", nullptr));
#endif // QT_NO_TOOLTIP
        verifyMessage->setText(QApplication::translate("AddressBookPage", "&Verify Message", nullptr));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("AddressBookPage", "Delete the currently selected address from the list", nullptr));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("AddressBookPage", "&Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddressBookPage: public Ui_AddressBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOKPAGE_H
