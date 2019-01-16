/********************************************************************************
** Form generated from reading UI file 'sendcoinsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDCOINSDIALOG_H
#define UI_SENDCOINSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SendCoinsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frameCoinControl;
    QVBoxLayout *verticalLayoutCoinControl2;
    QVBoxLayout *verticalLayoutCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl1;
    QLabel *labelCoinControlFeatures;
    QHBoxLayout *horizontalLayoutCoinControl2;
    QPushButton *pushButtonCoinControl;
    QLabel *labelCoinControlAutomaticallySelected;
    QLabel *labelCoinControlInsuffFunds;
    QSpacerItem *horizontalSpacerCoinControl;
    QWidget *widgetCoinControl;
    QHBoxLayout *horizontalLayoutCoinControl5;
    QHBoxLayout *horizontalLayoutCoinControl3;
    QFormLayout *formLayoutCoinControl1;
    QLabel *labelCoinControlQuantityText;
    QLabel *labelCoinControlQuantity;
    QLabel *labelCoinControlBytesText;
    QLabel *labelCoinControlBytes;
    QFormLayout *formLayoutCoinControl2;
    QLabel *labelCoinControlAmountText;
    QLabel *labelCoinControlAmount;
    QLabel *labelCoinControlPriorityText;
    QLabel *labelCoinControlPriority;
    QFormLayout *formLayoutCoinControl3;
    QLabel *labelCoinControlFeeText;
    QLabel *labelCoinControlFee;
    QLabel *labelCoinControlLowOutputText;
    QLabel *labelCoinControlLowOutput;
    QFormLayout *formLayoutCoinControl4;
    QLabel *labelCoinControlAfterFeeText;
    QLabel *labelCoinControlAfterFee;
    QLabel *labelCoinControlChangeText;
    QLabel *labelCoinControlChange;
    QHBoxLayout *horizontalLayoutCoinControl4;
    QCheckBox *splitBlockCheckBox;
    QLineEdit *splitBlockLineEdit;
    QLabel *labelBlockSizeText;
    QLabel *labelBlockSize;
    QCheckBox *returnChangeCheckBox;
    QCheckBox *checkBoxCoinControlChange;
    QLineEdit *lineEditCoinControlChange;
    QLabel *labelCoinControlChangeLabel;
    QSpacerItem *verticalSpacerCoinControl;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *entries;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *clearButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *labelBalance;
    QSpacerItem *horizontalSpacer;
    QPushButton *sendButton;

    void setupUi(QDialog *SendCoinsDialog)
    {
        if (SendCoinsDialog->objectName().isEmpty())
            SendCoinsDialog->setObjectName(QString::fromUtf8("SendCoinsDialog"));
        SendCoinsDialog->resize(850, 405);
        verticalLayout = new QVBoxLayout(SendCoinsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 8);
        frameCoinControl = new QFrame(SendCoinsDialog);
        frameCoinControl->setObjectName(QString::fromUtf8("frameCoinControl"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameCoinControl->sizePolicy().hasHeightForWidth());
        frameCoinControl->setSizePolicy(sizePolicy);
        frameCoinControl->setMaximumSize(QSize(16777215, 16777215));
        frameCoinControl->setFrameShape(QFrame::StyledPanel);
        frameCoinControl->setFrameShadow(QFrame::Sunken);
        verticalLayoutCoinControl2 = new QVBoxLayout(frameCoinControl);
#ifndef Q_OS_MAC
        verticalLayoutCoinControl2->setSpacing(-1);
#endif
        verticalLayoutCoinControl2->setObjectName(QString::fromUtf8("verticalLayoutCoinControl2"));
        verticalLayoutCoinControl2->setContentsMargins(0, 0, 0, 6);
        verticalLayoutCoinControl = new QVBoxLayout();
        verticalLayoutCoinControl->setSpacing(0);
        verticalLayoutCoinControl->setObjectName(QString::fromUtf8("verticalLayoutCoinControl"));
        verticalLayoutCoinControl->setContentsMargins(10, 10, -1, -1);
        horizontalLayoutCoinControl1 = new QHBoxLayout();
        horizontalLayoutCoinControl1->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl1"));
        horizontalLayoutCoinControl1->setContentsMargins(-1, -1, -1, 15);
        labelCoinControlFeatures = new QLabel(frameCoinControl);
        labelCoinControlFeatures->setObjectName(QString::fromUtf8("labelCoinControlFeatures"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelCoinControlFeatures->sizePolicy().hasHeightForWidth());
        labelCoinControlFeatures->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelCoinControlFeatures->setFont(font);
        labelCoinControlFeatures->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        horizontalLayoutCoinControl1->addWidget(labelCoinControlFeatures);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl1);

        horizontalLayoutCoinControl2 = new QHBoxLayout();
        horizontalLayoutCoinControl2->setSpacing(8);
        horizontalLayoutCoinControl2->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl2"));
        horizontalLayoutCoinControl2->setContentsMargins(-1, -1, -1, 10);
        pushButtonCoinControl = new QPushButton(frameCoinControl);
        pushButtonCoinControl->setObjectName(QString::fromUtf8("pushButtonCoinControl"));
        pushButtonCoinControl->setStyleSheet(QString::fromUtf8(""));

        horizontalLayoutCoinControl2->addWidget(pushButtonCoinControl);

        labelCoinControlAutomaticallySelected = new QLabel(frameCoinControl);
        labelCoinControlAutomaticallySelected->setObjectName(QString::fromUtf8("labelCoinControlAutomaticallySelected"));
        labelCoinControlAutomaticallySelected->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlAutomaticallySelected);

        labelCoinControlInsuffFunds = new QLabel(frameCoinControl);
        labelCoinControlInsuffFunds->setObjectName(QString::fromUtf8("labelCoinControlInsuffFunds"));
        labelCoinControlInsuffFunds->setFont(font);
        labelCoinControlInsuffFunds->setStyleSheet(QString::fromUtf8("color:red;font-weight:bold;"));
        labelCoinControlInsuffFunds->setMargin(5);

        horizontalLayoutCoinControl2->addWidget(labelCoinControlInsuffFunds);

        horizontalSpacerCoinControl = new QSpacerItem(40, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCoinControl2->addItem(horizontalSpacerCoinControl);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl2);

        widgetCoinControl = new QWidget(frameCoinControl);
        widgetCoinControl->setObjectName(QString::fromUtf8("widgetCoinControl"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widgetCoinControl->sizePolicy().hasHeightForWidth());
        widgetCoinControl->setSizePolicy(sizePolicy2);
        widgetCoinControl->setMinimumSize(QSize(0, 0));
        widgetCoinControl->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutCoinControl5 = new QHBoxLayout(widgetCoinControl);
        horizontalLayoutCoinControl5->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutCoinControl5->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl5"));
        horizontalLayoutCoinControl3 = new QHBoxLayout();
        horizontalLayoutCoinControl3->setSpacing(20);
        horizontalLayoutCoinControl3->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl3"));
        horizontalLayoutCoinControl3->setContentsMargins(-1, 0, -1, 10);
        formLayoutCoinControl1 = new QFormLayout();
        formLayoutCoinControl1->setObjectName(QString::fromUtf8("formLayoutCoinControl1"));
        formLayoutCoinControl1->setHorizontalSpacing(10);
        formLayoutCoinControl1->setVerticalSpacing(14);
        formLayoutCoinControl1->setContentsMargins(10, 4, 6, -1);
        labelCoinControlQuantityText = new QLabel(widgetCoinControl);
        labelCoinControlQuantityText->setObjectName(QString::fromUtf8("labelCoinControlQuantityText"));
        labelCoinControlQuantityText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        labelCoinControlQuantityText->setMargin(0);

        formLayoutCoinControl1->setWidget(0, QFormLayout::LabelRole, labelCoinControlQuantityText);

        labelCoinControlQuantity = new QLabel(widgetCoinControl);
        labelCoinControlQuantity->setObjectName(QString::fromUtf8("labelCoinControlQuantity"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Monospace"));
        font1.setPointSize(10);
        labelCoinControlQuantity->setFont(font1);
        labelCoinControlQuantity->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlQuantity->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlQuantity->setMargin(0);
        labelCoinControlQuantity->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(0, QFormLayout::FieldRole, labelCoinControlQuantity);

        labelCoinControlBytesText = new QLabel(widgetCoinControl);
        labelCoinControlBytesText->setObjectName(QString::fromUtf8("labelCoinControlBytesText"));
        labelCoinControlBytesText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutCoinControl1->setWidget(1, QFormLayout::LabelRole, labelCoinControlBytesText);

        labelCoinControlBytes = new QLabel(widgetCoinControl);
        labelCoinControlBytes->setObjectName(QString::fromUtf8("labelCoinControlBytes"));
        labelCoinControlBytes->setFont(font1);
        labelCoinControlBytes->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlBytes->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlBytes->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl1->setWidget(1, QFormLayout::FieldRole, labelCoinControlBytes);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl1);

        formLayoutCoinControl2 = new QFormLayout();
        formLayoutCoinControl2->setObjectName(QString::fromUtf8("formLayoutCoinControl2"));
        formLayoutCoinControl2->setHorizontalSpacing(10);
        formLayoutCoinControl2->setVerticalSpacing(14);
        formLayoutCoinControl2->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAmountText = new QLabel(widgetCoinControl);
        labelCoinControlAmountText->setObjectName(QString::fromUtf8("labelCoinControlAmountText"));
        labelCoinControlAmountText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        labelCoinControlAmountText->setMargin(0);

        formLayoutCoinControl2->setWidget(0, QFormLayout::LabelRole, labelCoinControlAmountText);

        labelCoinControlAmount = new QLabel(widgetCoinControl);
        labelCoinControlAmount->setObjectName(QString::fromUtf8("labelCoinControlAmount"));
        labelCoinControlAmount->setFont(font1);
        labelCoinControlAmount->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAmount->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAmount->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(0, QFormLayout::FieldRole, labelCoinControlAmount);

        labelCoinControlPriorityText = new QLabel(widgetCoinControl);
        labelCoinControlPriorityText->setObjectName(QString::fromUtf8("labelCoinControlPriorityText"));
        labelCoinControlPriorityText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutCoinControl2->setWidget(1, QFormLayout::LabelRole, labelCoinControlPriorityText);

        labelCoinControlPriority = new QLabel(widgetCoinControl);
        labelCoinControlPriority->setObjectName(QString::fromUtf8("labelCoinControlPriority"));
        labelCoinControlPriority->setFont(font1);
        labelCoinControlPriority->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlPriority->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlPriority->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl2->setWidget(1, QFormLayout::FieldRole, labelCoinControlPriority);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl2);

        formLayoutCoinControl3 = new QFormLayout();
        formLayoutCoinControl3->setObjectName(QString::fromUtf8("formLayoutCoinControl3"));
        formLayoutCoinControl3->setHorizontalSpacing(10);
        formLayoutCoinControl3->setVerticalSpacing(14);
        formLayoutCoinControl3->setContentsMargins(6, 4, 6, -1);
        labelCoinControlFeeText = new QLabel(widgetCoinControl);
        labelCoinControlFeeText->setObjectName(QString::fromUtf8("labelCoinControlFeeText"));
        labelCoinControlFeeText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        labelCoinControlFeeText->setMargin(0);

        formLayoutCoinControl3->setWidget(0, QFormLayout::LabelRole, labelCoinControlFeeText);

        labelCoinControlFee = new QLabel(widgetCoinControl);
        labelCoinControlFee->setObjectName(QString::fromUtf8("labelCoinControlFee"));
        labelCoinControlFee->setFont(font1);
        labelCoinControlFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(0, QFormLayout::FieldRole, labelCoinControlFee);

        labelCoinControlLowOutputText = new QLabel(widgetCoinControl);
        labelCoinControlLowOutputText->setObjectName(QString::fromUtf8("labelCoinControlLowOutputText"));
        labelCoinControlLowOutputText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutCoinControl3->setWidget(1, QFormLayout::LabelRole, labelCoinControlLowOutputText);

        labelCoinControlLowOutput = new QLabel(widgetCoinControl);
        labelCoinControlLowOutput->setObjectName(QString::fromUtf8("labelCoinControlLowOutput"));
        labelCoinControlLowOutput->setFont(font1);
        labelCoinControlLowOutput->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlLowOutput->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlLowOutput->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl3->setWidget(1, QFormLayout::FieldRole, labelCoinControlLowOutput);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl3);

        formLayoutCoinControl4 = new QFormLayout();
        formLayoutCoinControl4->setObjectName(QString::fromUtf8("formLayoutCoinControl4"));
        formLayoutCoinControl4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayoutCoinControl4->setHorizontalSpacing(10);
        formLayoutCoinControl4->setVerticalSpacing(14);
        formLayoutCoinControl4->setContentsMargins(6, 4, 6, -1);
        labelCoinControlAfterFeeText = new QLabel(widgetCoinControl);
        labelCoinControlAfterFeeText->setObjectName(QString::fromUtf8("labelCoinControlAfterFeeText"));
        labelCoinControlAfterFeeText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));
        labelCoinControlAfterFeeText->setMargin(0);

        formLayoutCoinControl4->setWidget(0, QFormLayout::LabelRole, labelCoinControlAfterFeeText);

        labelCoinControlAfterFee = new QLabel(widgetCoinControl);
        labelCoinControlAfterFee->setObjectName(QString::fromUtf8("labelCoinControlAfterFee"));
        labelCoinControlAfterFee->setFont(font1);
        labelCoinControlAfterFee->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlAfterFee->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlAfterFee->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(0, QFormLayout::FieldRole, labelCoinControlAfterFee);

        labelCoinControlChangeText = new QLabel(widgetCoinControl);
        labelCoinControlChangeText->setObjectName(QString::fromUtf8("labelCoinControlChangeText"));
        labelCoinControlChangeText->setStyleSheet(QString::fromUtf8("font-weight:bold;"));

        formLayoutCoinControl4->setWidget(1, QFormLayout::LabelRole, labelCoinControlChangeText);

        labelCoinControlChange = new QLabel(widgetCoinControl);
        labelCoinControlChange->setObjectName(QString::fromUtf8("labelCoinControlChange"));
        labelCoinControlChange->setFont(font1);
        labelCoinControlChange->setCursor(QCursor(Qt::IBeamCursor));
        labelCoinControlChange->setContextMenuPolicy(Qt::ActionsContextMenu);
        labelCoinControlChange->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayoutCoinControl4->setWidget(1, QFormLayout::FieldRole, labelCoinControlChange);


        horizontalLayoutCoinControl3->addLayout(formLayoutCoinControl4);

        horizontalLayoutCoinControl3->setStretch(3, 1);

        horizontalLayoutCoinControl5->addLayout(horizontalLayoutCoinControl3);


        verticalLayoutCoinControl->addWidget(widgetCoinControl);

        horizontalLayoutCoinControl4 = new QHBoxLayout();
        horizontalLayoutCoinControl4->setSpacing(12);
        horizontalLayoutCoinControl4->setObjectName(QString::fromUtf8("horizontalLayoutCoinControl4"));
        horizontalLayoutCoinControl4->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutCoinControl4->setContentsMargins(-1, 5, 5, -1);
        splitBlockCheckBox = new QCheckBox(frameCoinControl);
        splitBlockCheckBox->setObjectName(QString::fromUtf8("splitBlockCheckBox"));

        horizontalLayoutCoinControl4->addWidget(splitBlockCheckBox);

        splitBlockLineEdit = new QLineEdit(frameCoinControl);
        splitBlockLineEdit->setObjectName(QString::fromUtf8("splitBlockLineEdit"));
        splitBlockLineEdit->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(splitBlockLineEdit->sizePolicy().hasHeightForWidth());
        splitBlockLineEdit->setSizePolicy(sizePolicy3);
        splitBlockLineEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayoutCoinControl4->addWidget(splitBlockLineEdit);

        labelBlockSizeText = new QLabel(frameCoinControl);
        labelBlockSizeText->setObjectName(QString::fromUtf8("labelBlockSizeText"));
        labelBlockSizeText->setEnabled(false);
        labelBlockSizeText->setFont(font);

        horizontalLayoutCoinControl4->addWidget(labelBlockSizeText);

        labelBlockSize = new QLabel(frameCoinControl);
        labelBlockSize->setObjectName(QString::fromUtf8("labelBlockSize"));
        labelBlockSize->setEnabled(false);

        horizontalLayoutCoinControl4->addWidget(labelBlockSize);

        returnChangeCheckBox = new QCheckBox(frameCoinControl);
        returnChangeCheckBox->setObjectName(QString::fromUtf8("returnChangeCheckBox"));

        horizontalLayoutCoinControl4->addWidget(returnChangeCheckBox);

        checkBoxCoinControlChange = new QCheckBox(frameCoinControl);
        checkBoxCoinControlChange->setObjectName(QString::fromUtf8("checkBoxCoinControlChange"));

        horizontalLayoutCoinControl4->addWidget(checkBoxCoinControlChange);

        lineEditCoinControlChange = new QLineEdit(frameCoinControl);
        lineEditCoinControlChange->setObjectName(QString::fromUtf8("lineEditCoinControlChange"));
        lineEditCoinControlChange->setEnabled(false);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEditCoinControlChange->sizePolicy().hasHeightForWidth());
        lineEditCoinControlChange->setSizePolicy(sizePolicy4);

        horizontalLayoutCoinControl4->addWidget(lineEditCoinControlChange);

        labelCoinControlChangeLabel = new QLabel(frameCoinControl);
        labelCoinControlChangeLabel->setObjectName(QString::fromUtf8("labelCoinControlChangeLabel"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelCoinControlChangeLabel->sizePolicy().hasHeightForWidth());
        labelCoinControlChangeLabel->setSizePolicy(sizePolicy5);
        labelCoinControlChangeLabel->setMinimumSize(QSize(0, 0));
        labelCoinControlChangeLabel->setMargin(3);

        horizontalLayoutCoinControl4->addWidget(labelCoinControlChangeLabel);


        verticalLayoutCoinControl->addLayout(horizontalLayoutCoinControl4);

        verticalSpacerCoinControl = new QSpacerItem(800, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayoutCoinControl->addItem(verticalSpacerCoinControl);

        verticalLayoutCoinControl->setStretch(4, 1);

        verticalLayoutCoinControl2->addLayout(verticalLayoutCoinControl);


        verticalLayout->addWidget(frameCoinControl);

        scrollArea = new QScrollArea(SendCoinsDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 830, 158));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        entries = new QVBoxLayout();
        entries->setSpacing(6);
        entries->setObjectName(QString::fromUtf8("entries"));

        verticalLayout_2->addLayout(entries);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(SendCoinsDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/add"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);
        addButton->setAutoDefault(false);

        horizontalLayout->addWidget(addButton);

        clearButton = new QPushButton(SendCoinsDialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy6);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon1);
        clearButton->setAutoRepeatDelay(300);
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(SendCoinsDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy7);

        horizontalLayout_2->addWidget(label);

        labelBalance = new QLabel(SendCoinsDialog);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        sizePolicy7.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy7);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(labelBalance);


        horizontalLayout->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        sendButton = new QPushButton(SendCoinsDialog);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setMinimumSize(QSize(150, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/send"), QSize(), QIcon::Normal, QIcon::Off);
        sendButton->setIcon(icon2);

        horizontalLayout->addWidget(sendButton);


        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(1, 1);

        retranslateUi(SendCoinsDialog);

        sendButton->setDefault(true);


        QMetaObject::connectSlotsByName(SendCoinsDialog);
    } // setupUi

    void retranslateUi(QDialog *SendCoinsDialog)
    {
        SendCoinsDialog->setWindowTitle(QApplication::translate("SendCoinsDialog", "Send Coins", nullptr));
        labelCoinControlFeatures->setText(QApplication::translate("SendCoinsDialog", "Coin Control Features", nullptr));
        pushButtonCoinControl->setText(QApplication::translate("SendCoinsDialog", "Inputs...", nullptr));
        labelCoinControlAutomaticallySelected->setText(QApplication::translate("SendCoinsDialog", "automatically selected", nullptr));
        labelCoinControlInsuffFunds->setText(QApplication::translate("SendCoinsDialog", "Insufficient funds!", nullptr));
        labelCoinControlQuantityText->setText(QApplication::translate("SendCoinsDialog", "Quantity:", nullptr));
        labelCoinControlQuantity->setText(QApplication::translate("SendCoinsDialog", "0", nullptr));
        labelCoinControlBytesText->setText(QApplication::translate("SendCoinsDialog", "Bytes:", nullptr));
        labelCoinControlBytes->setText(QApplication::translate("SendCoinsDialog", "0", nullptr));
        labelCoinControlAmountText->setText(QApplication::translate("SendCoinsDialog", "Amount:", nullptr));
        labelCoinControlAmount->setText(QApplication::translate("SendCoinsDialog", "0.00 MOTA", nullptr));
        labelCoinControlPriorityText->setText(QApplication::translate("SendCoinsDialog", "Priority:", nullptr));
        labelCoinControlPriority->setText(QApplication::translate("SendCoinsDialog", "medium", nullptr));
        labelCoinControlFeeText->setText(QApplication::translate("SendCoinsDialog", "Fee:", nullptr));
        labelCoinControlFee->setText(QApplication::translate("SendCoinsDialog", "0.00 MOTA", nullptr));
        labelCoinControlLowOutputText->setText(QApplication::translate("SendCoinsDialog", "Low Output:", nullptr));
        labelCoinControlLowOutput->setText(QApplication::translate("SendCoinsDialog", "no", nullptr));
        labelCoinControlAfterFeeText->setText(QApplication::translate("SendCoinsDialog", "After Fee:", nullptr));
        labelCoinControlAfterFee->setText(QApplication::translate("SendCoinsDialog", "0.00 MOTA", nullptr));
        labelCoinControlChangeText->setText(QApplication::translate("SendCoinsDialog", "Change", nullptr));
        labelCoinControlChange->setText(QApplication::translate("SendCoinsDialog", "0.00 MOTA", nullptr));
        splitBlockCheckBox->setText(QApplication::translate("SendCoinsDialog", "SplitBlock", nullptr));
        labelBlockSizeText->setText(QApplication::translate("SendCoinsDialog", "Block Size:", nullptr));
        labelBlockSize->setText(QApplication::translate("SendCoinsDialog", "0.00 MOTA", nullptr));
        returnChangeCheckBox->setText(QApplication::translate("SendCoinsDialog", "Return Change", nullptr));
        checkBoxCoinControlChange->setText(QApplication::translate("SendCoinsDialog", "Custom Change Address", nullptr));
        labelCoinControlChangeLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("SendCoinsDialog", "Send to multiple recipients at once", nullptr));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("SendCoinsDialog", "Add &Recipient", nullptr));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("SendCoinsDialog", "Remove all transaction fields", nullptr));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("SendCoinsDialog", "Clear &All", nullptr));
        label->setText(QApplication::translate("SendCoinsDialog", "Balance:", nullptr));
        labelBalance->setText(QApplication::translate("SendCoinsDialog", "123.456 MOTA", nullptr));
#ifndef QT_NO_TOOLTIP
        sendButton->setToolTip(QApplication::translate("SendCoinsDialog", "Confirm the send action", nullptr));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("SendCoinsDialog", "S&end", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendCoinsDialog: public Ui_SendCoinsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDCOINSDIALOG_H
