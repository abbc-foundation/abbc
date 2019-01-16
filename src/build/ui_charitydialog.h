/********************************************************************************
** Form generated from reading UI file 'charitydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARITYDIALOG_H
#define UI_CHARITYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StakeForCharityDialog
{
public:
    QLineEdit *charityPercentEdit;
    QLineEdit *charityAddressEdit;
    QLabel *label_12;
    QLabel *message;
    QPushButton *addButton;
    QPushButton *disableButton;
    QPushButton *addressBookButton;
    QLabel *label;
    QLabel *label_5;
    QPushButton *deleteButton;
    QPushButton *activateButton;
    QPushButton *viewButton;
    QLabel *imagelabel;

    void setupUi(QWidget *StakeForCharityDialog)
    {
        if (StakeForCharityDialog->objectName().isEmpty())
            StakeForCharityDialog->setObjectName(QString::fromUtf8("StakeForCharityDialog"));
        StakeForCharityDialog->setWindowModality(Qt::NonModal);
        StakeForCharityDialog->resize(652, 538);
        charityPercentEdit = new QLineEdit(StakeForCharityDialog);
        charityPercentEdit->setObjectName(QString::fromUtf8("charityPercentEdit"));
        charityPercentEdit->setGeometry(QRect(130, 340, 161, 31));
        charityAddressEdit = new QLineEdit(StakeForCharityDialog);
        charityAddressEdit->setObjectName(QString::fromUtf8("charityAddressEdit"));
        charityAddressEdit->setGeometry(QRect(130, 370, 401, 31));
        label_12 = new QLabel(StakeForCharityDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 230, 451, 121));
        label_12->setLineWidth(1);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_12->setWordWrap(true);
        message = new QLabel(StakeForCharityDialog);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(210, 430, 381, 91));
        addButton = new QPushButton(StakeForCharityDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(10, 450, 91, 31));
        disableButton = new QPushButton(StakeForCharityDialog);
        disableButton->setObjectName(QString::fromUtf8("disableButton"));
        disableButton->setGeometry(QRect(110, 490, 91, 31));
        addressBookButton = new QPushButton(StakeForCharityDialog);
        addressBookButton->setObjectName(QString::fromUtf8("addressBookButton"));
        addressBookButton->setGeometry(QRect(530, 370, 41, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);
        addressBookButton->setAutoDefault(false);
        label = new QLabel(StakeForCharityDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 350, 91, 20));
        label_5 = new QLabel(StakeForCharityDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 380, 91, 20));
        deleteButton = new QPushButton(StakeForCharityDialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(110, 450, 91, 31));
        activateButton = new QPushButton(StakeForCharityDialog);
        activateButton->setObjectName(QString::fromUtf8("activateButton"));
        activateButton->setGeometry(QRect(10, 490, 91, 31));
        viewButton = new QPushButton(StakeForCharityDialog);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setGeometry(QRect(50, 410, 121, 31));
        imagelabel = new QLabel(StakeForCharityDialog);
        imagelabel->setObjectName(QString::fromUtf8("imagelabel"));
        imagelabel->setGeometry(QRect(160, 10, 231, 211));
        imagelabel->setStyleSheet(QString::fromUtf8("image: url(:/icons/circuit);"));

        retranslateUi(StakeForCharityDialog);

        QMetaObject::connectSlotsByName(StakeForCharityDialog);
    } // setupUi

    void retranslateUi(QWidget *StakeForCharityDialog)
    {
        StakeForCharityDialog->setWindowTitle(QApplication::translate("StakeForCharityDialog", "Stake For Charity", nullptr));
#ifndef QT_NO_TOOLTIP
        charityPercentEdit->setToolTip(QApplication::translate("StakeForCharityDialog", "Enter whole numbers 1 - 100", nullptr));
#endif // QT_NO_TOOLTIP
        charityPercentEdit->setPlaceholderText(QApplication::translate("StakeForCharityDialog", "Enter % to Give (1-100)", nullptr));
#ifndef QT_NO_TOOLTIP
        charityAddressEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        charityAddressEdit->setPlaceholderText(QApplication::translate("StakeForCharityDialog", "Enter Address to Send to", nullptr));
        label_12->setText(QApplication::translate("StakeForCharityDialog", "MultiSend allows you to automatically send up to 100% of your Stake to a list of other ABBCCoin address after it matures.\n"
"To Add: enter percentage to give and ABBCCoin address to add to the MultiSend vector. \n"
"To Delete: Enter address to delete and press delete.\n"
"MultiSend will not be activated unless you have clicked Activate.", nullptr));
        message->setText(QString());
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        addButton->setStatusTip(QApplication::translate("StakeForCharityDialog", "Add to MultiSend Vector", nullptr));
#endif // QT_NO_STATUSTIP
        addButton->setText(QApplication::translate("StakeForCharityDialog", "Add", nullptr));
#ifndef QT_NO_STATUSTIP
        disableButton->setStatusTip(QApplication::translate("StakeForCharityDialog", "Deactivate MultiSend", nullptr));
#endif // QT_NO_STATUSTIP
        disableButton->setText(QApplication::translate("StakeForCharityDialog", "Deactivate", nullptr));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("StakeForCharityDialog", "Choose an address from the address book", nullptr));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
#ifndef QT_NO_SHORTCUT
        addressBookButton->setShortcut(QApplication::translate("StakeForCharityDialog", "Alt+A", nullptr));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("StakeForCharityDialog", "Percentage of stake to send", nullptr));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("StakeForCharityDialog", "Percentage:", nullptr));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("StakeForCharityDialog", "Address to send portion of stake to", nullptr));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("StakeForCharityDialog", "Address:", nullptr));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        deleteButton->setStatusTip(QApplication::translate("StakeForCharityDialog", "Delete Address From MultiSend Vector", nullptr));
#endif // QT_NO_STATUSTIP
        deleteButton->setText(QApplication::translate("StakeForCharityDialog", "Delete", nullptr));
#ifndef QT_NO_STATUSTIP
        activateButton->setStatusTip(QApplication::translate("StakeForCharityDialog", "Activate MultiSend", nullptr));
#endif // QT_NO_STATUSTIP
        activateButton->setText(QApplication::translate("StakeForCharityDialog", "Activate", nullptr));
#ifndef QT_NO_TOOLTIP
        viewButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewButton->setStatusTip(QApplication::translate("StakeForCharityDialog", "View MultiSend Vector", nullptr));
#endif // QT_NO_STATUSTIP
        viewButton->setText(QApplication::translate("StakeForCharityDialog", "View MultiSend", nullptr));
        imagelabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StakeForCharityDialog: public Ui_StakeForCharityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARITYDIALOG_H
