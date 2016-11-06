/********************************************************************************
** Form generated from reading UI file 'baseqtproject.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEQTPROJECT_H
#define UI_BASEQTPROJECT_H

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

class Ui_BaseQtProjectClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BaseQtProjectClass)
    {
        if (BaseQtProjectClass->objectName().isEmpty())
            BaseQtProjectClass->setObjectName(QStringLiteral("BaseQtProjectClass"));
        BaseQtProjectClass->resize(600, 400);
        menuBar = new QMenuBar(BaseQtProjectClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        BaseQtProjectClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BaseQtProjectClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        BaseQtProjectClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(BaseQtProjectClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        BaseQtProjectClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(BaseQtProjectClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BaseQtProjectClass->setStatusBar(statusBar);

        retranslateUi(BaseQtProjectClass);

        QMetaObject::connectSlotsByName(BaseQtProjectClass);
    } // setupUi

    void retranslateUi(QMainWindow *BaseQtProjectClass)
    {
        BaseQtProjectClass->setWindowTitle(QApplication::translate("BaseQtProjectClass", "BaseQtProject", 0));
    } // retranslateUi

};

namespace Ui {
    class BaseQtProjectClass: public Ui_BaseQtProjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEQTPROJECT_H
