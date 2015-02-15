/********************************************************************************
** Form generated from reading UI file 'vaivai.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VAIVAI_H
#define UI_VAIVAI_H

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

class Ui_VaiVaiClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *VaiVaiClass)
    {
        if (VaiVaiClass->objectName().isEmpty())
            VaiVaiClass->setObjectName(QStringLiteral("VaiVaiClass"));
        VaiVaiClass->resize(600, 400);
        menuBar = new QMenuBar(VaiVaiClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        VaiVaiClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(VaiVaiClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        VaiVaiClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(VaiVaiClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        VaiVaiClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(VaiVaiClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        VaiVaiClass->setStatusBar(statusBar);

        retranslateUi(VaiVaiClass);

        QMetaObject::connectSlotsByName(VaiVaiClass);
    } // setupUi

    void retranslateUi(QMainWindow *VaiVaiClass)
    {
        VaiVaiClass->setWindowTitle(QApplication::translate("VaiVaiClass", "VaiVai", 0));
    } // retranslateUi

};

namespace Ui {
    class VaiVaiClass: public Ui_VaiVaiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VAIVAI_H
