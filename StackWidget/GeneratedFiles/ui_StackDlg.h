/********************************************************************************
** Form generated from reading UI file 'StackDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKDLG_H
#define UI_STACKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_StackDlgClass
{
public:

    void setupUi(QDialog *StackDlgClass)
    {
        if (StackDlgClass->objectName().isEmpty())
            StackDlgClass->setObjectName(QStringLiteral("StackDlgClass"));
        StackDlgClass->resize(600, 400);

        retranslateUi(StackDlgClass);

        QMetaObject::connectSlotsByName(StackDlgClass);
    } // setupUi

    void retranslateUi(QDialog *StackDlgClass)
    {
        StackDlgClass->setWindowTitle(QApplication::translate("StackDlgClass", "StackDlg", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StackDlgClass: public Ui_StackDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKDLG_H
