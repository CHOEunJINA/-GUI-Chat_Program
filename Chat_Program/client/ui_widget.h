/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *connectButton;
    QPushButton *sendButton;
    QListWidget *listWidget;
    QLineEdit *portLineEdit;
    QLineEdit *ipLineEdit;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *messageLineEdit;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1200, 1000);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 471, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        connectButton = new QPushButton(gridLayoutWidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));

        gridLayout->addWidget(connectButton, 0, 2, 1, 2);

        sendButton = new QPushButton(gridLayoutWidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        gridLayout->addWidget(sendButton, 4, 0, 1, 2);

        listWidget = new QListWidget(gridLayoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setAutoScroll(false);
        listWidget->setAutoScrollMargin(3);
        listWidget->setDefaultDropAction(Qt::IgnoreAction);
        listWidget->setMovement(QListView::Static);

        gridLayout->addWidget(listWidget, 5, 0, 1, 2);

        portLineEdit = new QLineEdit(gridLayoutWidget);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setMinimumSize(QSize(400, 0));

        gridLayout->addWidget(portLineEdit, 1, 1, 1, 1);

        ipLineEdit = new QLineEdit(gridLayoutWidget);
        ipLineEdit->setObjectName(QString::fromUtf8("ipLineEdit"));
        ipLineEdit->setMinimumSize(QSize(400, 0));

        gridLayout->addWidget(ipLineEdit, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        messageLineEdit = new QLineEdit(gridLayoutWidget);
        messageLineEdit->setObjectName(QString::fromUtf8("messageLineEdit"));

        gridLayout->addWidget(messageLineEdit, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        connectButton->setText(QCoreApplication::translate("Widget", "Connect", nullptr));
        sendButton->setText(QCoreApplication::translate("Widget", "Send Chat", nullptr));
        label->setText(QCoreApplication::translate("Widget", "IP ADDR:", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "PORT:", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Message:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
