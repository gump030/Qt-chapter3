/********************************************************************************
** Form generated from reading UI file 'Connect.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT_H
#define UI_CONNECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ConnectClass
{
public:

    void setupUi(QDialog *ConnectClass)
    {
        if (ConnectClass->objectName().isEmpty())
            ConnectClass->setObjectName(QStringLiteral("ConnectClass"));
        ConnectClass->resize(600, 400);

        retranslateUi(ConnectClass);

        QMetaObject::connectSlotsByName(ConnectClass);
    } // setupUi

    void retranslateUi(QDialog *ConnectClass)
    {
        ConnectClass->setWindowTitle(QApplication::translate("ConnectClass", "Connect", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectClass: public Ui_ConnectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT_H
