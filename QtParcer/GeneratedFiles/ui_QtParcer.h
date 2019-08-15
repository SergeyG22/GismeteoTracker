/********************************************************************************
** Form generated from reading UI file 'QtParcer.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTPARCER_H
#define UI_QTPARCER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtParcerClass
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLabel *label_weather;
    QLabel *label_temperature;
    QLabel *label_data_time;
    QComboBox *comboBox_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtParcerClass)
    {
        if (QtParcerClass->objectName().isEmpty())
            QtParcerClass->setObjectName(QStringLiteral("QtParcerClass"));
        QtParcerClass->resize(800, 300);
        QFont font;
        font.setPointSize(8);
        QtParcerClass->setFont(font);
        centralWidget = new QWidget(QtParcerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 25, 211, 30));
        QFont font1;
        font1.setPointSize(12);
        comboBox->setFont(font1);
        label_weather = new QLabel(centralWidget);
        label_weather->setObjectName(QStringLiteral("label_weather"));
        label_weather->setGeometry(QRect(500, 80, 81, 33));
        QFont font2;
        font2.setPointSize(16);
        label_weather->setFont(font2);
        label_temperature = new QLabel(centralWidget);
        label_temperature->setObjectName(QStringLiteral("label_temperature"));
        label_temperature->setGeometry(QRect(260, 80, 216, 33));
        label_temperature->setFont(font2);
        label_data_time = new QLabel(centralWidget);
        label_data_time->setObjectName(QStringLiteral("label_data_time"));
        label_data_time->setGeometry(QRect(250, 30, 511, 21));
        label_data_time->setFont(font2);
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(20, 70, 101, 31));
        comboBox_2->setFont(font1);
        QtParcerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtParcerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
        QtParcerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtParcerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtParcerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtParcerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtParcerClass->setStatusBar(statusBar);

        retranslateUi(QtParcerClass);

        QMetaObject::connectSlotsByName(QtParcerClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtParcerClass)
    {
        QtParcerClass->setWindowTitle(QApplication::translate("QtParcerClass", "QtParcer", nullptr));
        label_weather->setText(QString());
        label_temperature->setText(QApplication::translate("QtParcerClass", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260 \320\262 \320\241:", nullptr));
        label_data_time->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtParcerClass: public Ui_QtParcerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPARCER_H
