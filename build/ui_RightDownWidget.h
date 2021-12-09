/********************************************************************************
** Form generated from reading UI file 'RightDownWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIGHTDOWNWIDGET_H
#define UI_RIGHTDOWNWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RightDownWidget
{
public:
    QAction *action_1;
    QAction *action_2;
    QAction *action_3;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *RightDownWidget)
    {
        if (RightDownWidget->objectName().isEmpty())
            RightDownWidget->setObjectName(QString::fromUtf8("RightDownWidget"));
        RightDownWidget->resize(720, 358);
        action_1 = new QAction(RightDownWidget);
        action_1->setObjectName(QString::fromUtf8("action_1"));
        action_2 = new QAction(RightDownWidget);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(RightDownWidget);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        verticalLayout = new QVBoxLayout(RightDownWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(RightDownWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_3->addWidget(tableWidget);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableWidget_2 = new QTableWidget(tab_2);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        verticalLayout_2->addWidget(tableWidget_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(RightDownWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RightDownWidget);
    } // setupUi

    void retranslateUi(QWidget *RightDownWidget)
    {
        RightDownWidget->setWindowTitle(QCoreApplication::translate("RightDownWidget", "Form", nullptr));
        action_1->setText(QCoreApplication::translate("RightDownWidget", "\347\252\227\345\217\2431", nullptr));
        action_2->setText(QCoreApplication::translate("RightDownWidget", "\347\252\227\345\217\2432", nullptr));
        action_3->setText(QCoreApplication::translate("RightDownWidget", "\347\252\227\345\217\2433", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("RightDownWidget", "\346\226\207\344\273\266\345\210\227\350\241\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("RightDownWidget", "\347\273\237\350\256\241\347\273\223\346\236\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RightDownWidget: public Ui_RightDownWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIGHTDOWNWIDGET_H
