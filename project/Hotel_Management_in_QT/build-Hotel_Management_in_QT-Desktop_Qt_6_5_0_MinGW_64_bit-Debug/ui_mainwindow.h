/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *imgLabel;
    QPushButton *btnRoomBooking;
    QPushButton *btnRoomCheckout;
    QPushButton *btnCheckAvailability;
    QPushButton *bntTransaction;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 350);
        QFont font;
        font.setKerning(false);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        imgLabel = new QLabel(centralWidget);
        imgLabel->setObjectName("imgLabel");
        imgLabel->setGeometry(QRect(160, 0, 340, 351));
        btnRoomBooking = new QPushButton(centralWidget);
        btnRoomBooking->setObjectName("btnRoomBooking");
        btnRoomBooking->setGeometry(QRect(10, 10, 135, 70));
        QFont font1;
        font1.setPointSize(12);
        font1.setKerning(false);
        btnRoomBooking->setFont(font1);
        btnRoomBooking->setAutoDefault(true);
        btnRoomBooking->setFlat(false);
        btnRoomCheckout = new QPushButton(centralWidget);
        btnRoomCheckout->setObjectName("btnRoomCheckout");
        btnRoomCheckout->setGeometry(QRect(10, 90, 135, 70));
        btnRoomCheckout->setFont(font1);
        btnRoomCheckout->setFlat(false);
        btnCheckAvailability = new QPushButton(centralWidget);
        btnCheckAvailability->setObjectName("btnCheckAvailability");
        btnCheckAvailability->setGeometry(QRect(10, 170, 135, 70));
        btnCheckAvailability->setFont(font1);
        btnCheckAvailability->setAutoDefault(true);
        btnCheckAvailability->setFlat(false);
        bntTransaction = new QPushButton(centralWidget);
        bntTransaction->setObjectName("bntTransaction");
        bntTransaction->setGeometry(QRect(10, 250, 135, 70));
        bntTransaction->setFont(font1);
        bntTransaction->setAutoDefault(true);
        bntTransaction->setFlat(false);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        btnRoomBooking->setDefault(true);
        btnRoomCheckout->setDefault(true);
        btnCheckAvailability->setDefault(true);
        bntTransaction->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hotel Management 1.0", nullptr));
        imgLabel->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btnRoomBooking->setText(QCoreApplication::translate("MainWindow", "Room Booking", nullptr));
        btnRoomCheckout->setText(QCoreApplication::translate("MainWindow", "Check-Out", nullptr));
        btnCheckAvailability->setText(QCoreApplication::translate("MainWindow", "Check Availability", nullptr));
        bntTransaction->setText(QCoreApplication::translate("MainWindow", "Transactions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
