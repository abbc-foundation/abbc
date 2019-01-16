/********************************************************************************
** Form generated from reading UI file 'chatwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATWINDOW_H
#define UI_CHATWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatWindowClass
{
public:
    QAction *actionQuit;
    QAction *actionCloseTab;
    QWidget *widget_2;
    QWidget *splitter;
    QTabWidget *tab;
    QWidget *widget_4;
    QWidget *tab_5;
    QWidget *hide3;
    QWidget *layoutWidget;
    QHBoxLayout *hide1;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *ChatWindowClass)
    {
        if (ChatWindowClass->objectName().isEmpty())
            ChatWindowClass->setObjectName(QString::fromUtf8("ChatWindowClass"));
        ChatWindowClass->resize(747, 514);
        actionQuit = new QAction(ChatWindowClass);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionCloseTab = new QAction(ChatWindowClass);
        actionCloseTab->setObjectName(QString::fromUtf8("actionCloseTab"));
        widget_2 = new QWidget(ChatWindowClass);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 741, 511));
        splitter = new QWidget(widget_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setEnabled(true);
        splitter->setGeometry(QRect(10, 10, 721, 501));
        splitter->setStyleSheet(QString::fromUtf8(""));
        tab = new QTabWidget(splitter);
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setGeometry(QRect(10, 0, 541, 451));
        tab->setStyleSheet(QString::fromUtf8(""));
        tab->setTabShape(QTabWidget::Rounded);
        tab->setTabsClosable(false);
        widget_4 = new QWidget();
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        tab->addTab(widget_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tab->addTab(tab_5, QString());
        hide3 = new QWidget(widget_2);
        hide3->setObjectName(QString::fromUtf8("hide3"));
        hide3->setGeometry(QRect(10, 10, 731, 501));
        layoutWidget = new QWidget(hide3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 250, 27));
        hide1 = new QHBoxLayout(layoutWidget);
        hide1->setSpacing(7);
        hide1->setContentsMargins(11, 11, 11, 11);
        hide1->setObjectName(QString::fromUtf8("hide1"));
        hide1->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans,sans-serif"));
        label_9->setFont(font);

        hide1->addWidget(label_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hide1->addItem(horizontalSpacer_4);

        label = new QLabel(hide3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 280, 111, 101));
        label->setMargin(5);
        label->setOpenExternalLinks(true);
        label_3 = new QLabel(hide3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 280, 101, 101));
        label_3->setOpenExternalLinks(true);
        label_4 = new QLabel(hide3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 280, 101, 101));
        label_4->setOpenExternalLinks(true);
        label_6 = new QLabel(hide3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 280, 101, 101));
        label_6->setOpenExternalLinks(true);
        label_7 = new QLabel(hide3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(430, 280, 101, 101));
        label_7->setOpenExternalLinks(true);

        retranslateUi(ChatWindowClass);

        tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ChatWindowClass);
    } // setupUi

    void retranslateUi(QWidget *ChatWindowClass)
    {
        actionQuit->setText(QApplication::translate("ChatWindowClass", "Quitter", nullptr));
#ifndef QT_NO_SHORTCUT
        actionQuit->setShortcut(QApplication::translate("ChatWindowClass", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionCloseTab->setText(QApplication::translate("ChatWindowClass", "Fermer l'onglet", nullptr));
        tab->setTabText(tab->indexOf(widget_4), QApplication::translate("ChatWindowClass", "Tab 1", nullptr));
        tab->setTabText(tab->indexOf(tab_5), QApplication::translate("ChatWindowClass", "Tab 2", nullptr));
        label_9->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><span style=\" font-size:20px; font-weight:600; color:#000000;\">ABBCCoin IRC Chat</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://twitter.com/ColossusCoin/ style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/twitter\"/></span></a></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://www.facebook.com/ColossusCoin style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/face\"/></span></a></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=http://www.reddit.com/r/ColossusCoin/ style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/reddit\"/></span></a></p></body></html>", nullptr));
        label_6->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=https://www.youtube.com/channel/UCnxsRfsbyeBwz1hn0f7tHjw style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/youtube\"/></span></a></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("ChatWindowClass", "<html><head/><body><p align=\"center\"><a href=http://colossuscointalk.org style=\" text-decoration: underline; color:#0000ff;\"><img src=\":/icons/forums\"/></span></a></p></body></html>", nullptr));
        Q_UNUSED(ChatWindowClass);
    } // retranslateUi

};

namespace Ui {
    class ChatWindowClass: public Ui_ChatWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATWINDOW_H
