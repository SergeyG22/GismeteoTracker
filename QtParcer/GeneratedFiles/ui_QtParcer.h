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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_QtParcerClass
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox;
    QLabel *label_weather;
    QLabel *label_temperature;
    QLabel *label_data_time;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QCheckBox *checkBox_file_write;
    QCheckBox *checkBox_change_list;
    QCustomPlot *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtParcerClass)
    {
        if (QtParcerClass->objectName().isEmpty())
            QtParcerClass->setObjectName(QStringLiteral("QtParcerClass"));
        QtParcerClass->resize(957, 907);
        QFont font;
        font.setPointSize(8);
        QtParcerClass->setFont(font);
        centralWidget = new QWidget(QtParcerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(70, 25, 211, 30));
        QFont font1;
        font1.setPointSize(12);
        comboBox->setFont(font1);
        label_weather = new QLabel(centralWidget);
        label_weather->setObjectName(QStringLiteral("label_weather"));
        label_weather->setGeometry(QRect(610, 80, 181, 33));
        QFont font2;
        font2.setPointSize(16);
        label_weather->setFont(font2);
        label_temperature = new QLabel(centralWidget);
        label_temperature->setObjectName(QStringLiteral("label_temperature"));
        label_temperature->setGeometry(QRect(370, 80, 216, 33));
        label_temperature->setFont(font2);
        label_data_time = new QLabel(centralWidget);
        label_data_time->setObjectName(QStringLiteral("label_data_time"));
        label_data_time->setGeometry(QRect(370, 30, 511, 21));
        label_data_time->setFont(font2);
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 80, 331, 192));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 290, 111, 28));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(780, 260, 142, 49));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_file_write = new QCheckBox(layoutWidget);
        checkBox_file_write->setObjectName(QStringLiteral("checkBox_file_write"));

        formLayout->setWidget(0, QFormLayout::LabelRole, checkBox_file_write);

        checkBox_change_list = new QCheckBox(layoutWidget);
        checkBox_change_list->setObjectName(QStringLiteral("checkBox_change_list"));

        formLayout->setWidget(1, QFormLayout::LabelRole, checkBox_change_list);

        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 350, 891, 481));
        QtParcerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtParcerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 957, 26));
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
        pushButton->setText(QApplication::translate("QtParcerClass", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
        checkBox_file_write->setText(QApplication::translate("QtParcerClass", "\321\201\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        checkBox_change_list->setText(QApplication::translate("QtParcerClass", "\321\201\320\276\321\205\321\200\320\260\320\275\321\217\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtParcerClass: public Ui_QtParcerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPARCER_H
