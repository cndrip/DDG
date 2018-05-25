/********************************************************************************
** Form generated from reading UI file 'DDG.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DDG_H
#define UI_DDG_H

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

class Ui_DDGClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DDGClass)
    {
        if (DDGClass->objectName().isEmpty())
            DDGClass->setObjectName(QStringLiteral("DDGClass"));
        DDGClass->resize(600, 400);
        menuBar = new QMenuBar(DDGClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        DDGClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DDGClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DDGClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(DDGClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        DDGClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DDGClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DDGClass->setStatusBar(statusBar);

        retranslateUi(DDGClass);

        QMetaObject::connectSlotsByName(DDGClass);
    } // setupUi

    void retranslateUi(QMainWindow *DDGClass)
    {
        DDGClass->setWindowTitle(QApplication::translate("DDGClass", "DDG", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DDGClass: public Ui_DDGClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DDG_H
