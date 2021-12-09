/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *openAction;
    QAction *rectAction;
    QAction *elipseAction;
    QAction *textAction;
    QAction *pictureAction;
    QAction *exitAction;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_4;
    QWidget *widget_6;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1052, 671);
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QString::fromUtf8("openAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../PNG/\346\211\223\345\274\200.png"), QSize(), QIcon::Normal, QIcon::Off);
        openAction->setIcon(icon);
        rectAction = new QAction(MainWindow);
        rectAction->setObjectName(QString::fromUtf8("rectAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../PNG/\347\237\251\345\275\242.png"), QSize(), QIcon::Normal, QIcon::Off);
        rectAction->setIcon(icon1);
        elipseAction = new QAction(MainWindow);
        elipseAction->setObjectName(QString::fromUtf8("elipseAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../PNG/\345\234\206.png"), QSize(), QIcon::Normal, QIcon::Off);
        elipseAction->setIcon(icon2);
        textAction = new QAction(MainWindow);
        textAction->setObjectName(QString::fromUtf8("textAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../PNG/\346\226\207\346\234\254.png"), QSize(), QIcon::Normal, QIcon::Off);
        textAction->setIcon(icon3);
        pictureAction = new QAction(MainWindow);
        pictureAction->setObjectName(QString::fromUtf8("pictureAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../PNG/\346\267\273\345\212\240\345\233\276\347\211\207.png"), QSize(), QIcon::Normal, QIcon::Off);
        pictureAction->setIcon(icon4);
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../PNG/\345\217\226 \346\266\210.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitAction->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_5->addLayout(horizontalLayout_3);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));

        verticalLayout_5->addWidget(widget_5);

        verticalLayout_5->setStretch(0, 1);
        verticalLayout_5->setStretch(1, 20);

        verticalLayout_6->addLayout(verticalLayout_5);


        horizontalLayout_2->addWidget(widget);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));

        verticalLayout->addWidget(widget_2);


        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(groupBox_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));

        verticalLayout_2->addWidget(widget_3);


        horizontalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(groupBox_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));

        verticalLayout_4->addWidget(widget_4);


        horizontalLayout->addWidget(groupBox_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));

        verticalLayout_3->addWidget(widget_6);

        verticalLayout_3->setStretch(0, 4);
        verticalLayout_3->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 6);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1052, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menu->addAction(openAction);
        toolBar->addAction(openAction);
        toolBar->addAction(rectAction);
        toolBar->addAction(elipseAction);
        toolBar->addAction(textAction);
        toolBar->addAction(pictureAction);
        toolBar->addAction(exitAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openAction->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        rectAction->setText(QCoreApplication::translate("MainWindow", "\347\237\251\345\275\242", nullptr));
        elipseAction->setText(QCoreApplication::translate("MainWindow", "\345\234\206\345\275\242", nullptr));
        textAction->setText(QCoreApplication::translate("MainWindow", "\346\226\207\346\234\254", nullptr));
        pictureAction->setText(QCoreApplication::translate("MainWindow", "\345\233\276\347\211\207", nullptr));
        exitAction->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " \346\225\260\346\215\256\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\2431", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\2432", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\347\252\227\345\217\2433", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
