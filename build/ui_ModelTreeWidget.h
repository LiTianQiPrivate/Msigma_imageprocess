/********************************************************************************
** Form generated from reading UI file 'ModelTreeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODELTREEWIDGET_H
#define UI_MODELTREEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModelTreeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *ModelTreeWidget)
    {
        if (ModelTreeWidget->objectName().isEmpty())
            ModelTreeWidget->setObjectName(QString::fromUtf8("ModelTreeWidget"));
        ModelTreeWidget->resize(420, 699);
        verticalLayout = new QVBoxLayout(ModelTreeWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(ModelTreeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);


        retranslateUi(ModelTreeWidget);

        QMetaObject::connectSlotsByName(ModelTreeWidget);
    } // setupUi

    void retranslateUi(QWidget *ModelTreeWidget)
    {
        ModelTreeWidget->setWindowTitle(QCoreApplication::translate("ModelTreeWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModelTreeWidget: public Ui_ModelTreeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODELTREEWIDGET_H
