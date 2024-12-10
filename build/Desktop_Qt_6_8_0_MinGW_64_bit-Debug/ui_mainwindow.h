/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *cuttingSpeed;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *diameter;
    QLineEdit *lengthOfCut;
    QLineEdit *numberOfPasses;
    QLineEdit *feedPerTooth;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *numberOfTeeth;
    QLabel *label_7;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *turningLength;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        cuttingSpeed = new QLineEdit(centralwidget);
        cuttingSpeed->setObjectName("cuttingSpeed");
        cuttingSpeed->setGeometry(QRect(40, 50, 113, 28));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 101, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 90, 121, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 160, 101, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 230, 121, 20));
        diameter = new QLineEdit(centralwidget);
        diameter->setObjectName("diameter");
        diameter->setGeometry(QRect(40, 120, 113, 28));
        lengthOfCut = new QLineEdit(centralwidget);
        lengthOfCut->setObjectName("lengthOfCut");
        lengthOfCut->setGeometry(QRect(40, 190, 113, 28));
        numberOfPasses = new QLineEdit(centralwidget);
        numberOfPasses->setObjectName("numberOfPasses");
        numberOfPasses->setGeometry(QRect(40, 260, 113, 28));
        feedPerTooth = new QLineEdit(centralwidget);
        feedPerTooth->setObjectName("feedPerTooth");
        feedPerTooth->setGeometry(QRect(190, 50, 113, 28));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(190, 20, 111, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(190, 90, 121, 20));
        numberOfTeeth = new QLineEdit(centralwidget);
        numberOfTeeth->setObjectName("numberOfTeeth");
        numberOfTeeth->setGeometry(QRect(190, 120, 113, 28));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(190, 90, 121, 20));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(360, 50, 256, 192));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(360, 260, 101, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(510, 260, 101, 29));
        turningLength = new QLineEdit(centralwidget);
        turningLength->setObjectName("turningLength");
        turningLength->setGeometry(QRect(190, 190, 113, 28));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(190, 160, 111, 20));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(200, 250, 83, 29));
        MainWindow->setCentralWidget(centralwidget);
        label_5->raise();
        cuttingSpeed->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        diameter->raise();
        lengthOfCut->raise();
        numberOfPasses->raise();
        feedPerTooth->raise();
        label_6->raise();
        numberOfTeeth->raise();
        label_7->raise();
        textBrowser->raise();
        pushButton->raise();
        pushButton_2->raise();
        turningLength->raise();
        label_8->raise();
        pushButton_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Cutting Speed", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Diameter Of Rod", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Length of Cut", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Number Of Passes", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Feed Per Tooth", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Number Of Teeth", nullptr));
        label_7->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Milling Time", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Turning Time", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Turning Length", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Psudocode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
