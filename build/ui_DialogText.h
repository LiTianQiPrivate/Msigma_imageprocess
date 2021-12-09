/********************************************************************************
** Form generated from reading UI file 'DialogText.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEXT_H
#define UI_DIALOGTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogText
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogText)
    {
        if (DialogText->objectName().isEmpty())
            DialogText->setObjectName(QString::fromUtf8("DialogText"));
        DialogText->resize(388, 125);
        verticalLayout_2 = new QVBoxLayout(DialogText);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DialogText);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(DialogText);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font.setPointSize(10);
        lineEdit->setFont(font);

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(DialogText);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(DialogText);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogText, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogText, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogText);
    } // setupUi

    void retranslateUi(QDialog *DialogText)
    {
        DialogText->setWindowTitle(QCoreApplication::translate("DialogText", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogText", "\350\276\223\345\205\245\345\244\207\346\263\250\344\277\241\346\201\257\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogText: public Ui_DialogText {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEXT_H
