/********************************************************************************
** Form generated from reading UI file 'DockWindows.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCKWINDOWS_H
#define UI_DOCKWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DockWindowsClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DockWindowsClass)
    {
        if (DockWindowsClass->objectName().isEmpty())
            DockWindowsClass->setObjectName(QStringLiteral("DockWindowsClass"));
        DockWindowsClass->resize(600, 400);
        menuBar = new QMenuBar(DockWindowsClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        DockWindowsClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DockWindowsClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DockWindowsClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DockWindowsClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DockWindowsClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DockWindowsClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DockWindowsClass->setStatusBar(statusBar);

        retranslateUi(DockWindowsClass);

        QMetaObject::connectSlotsByName(DockWindowsClass);
    } // setupUi

    void retranslateUi(QMainWindow *DockWindowsClass)
    {
        DockWindowsClass->setWindowTitle(QApplication::translate("DockWindowsClass", "DockWindows", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DockWindowsClass: public Ui_DockWindowsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCKWINDOWS_H
