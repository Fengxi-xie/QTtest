/********************************************************************************
** Form generated from reading UI file 'QtVTKtest.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTVTKTEST_H
#define UI_QTVTKTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtVTKtestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtVTKtestClass)
    {
        if (QtVTKtestClass->objectName().isEmpty())
            QtVTKtestClass->setObjectName(QString::fromUtf8("QtVTKtestClass"));
        QtVTKtestClass->resize(600, 400);
        menuBar = new QMenuBar(QtVTKtestClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QtVTKtestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtVTKtestClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtVTKtestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtVTKtestClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QtVTKtestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtVTKtestClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtVTKtestClass->setStatusBar(statusBar);

        retranslateUi(QtVTKtestClass);

        QMetaObject::connectSlotsByName(QtVTKtestClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtVTKtestClass)
    {
        QtVTKtestClass->setWindowTitle(QApplication::translate("QtVTKtestClass", "QtVTKtest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtVTKtestClass: public Ui_QtVTKtestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTVTKTEST_H
