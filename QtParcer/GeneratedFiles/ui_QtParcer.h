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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtParcerClass
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtParcerClass)
    {
        if (QtParcerClass->objectName().isEmpty())
            QtParcerClass->setObjectName(QStringLiteral("QtParcerClass"));
        QtParcerClass->resize(600, 400);
        centralWidget = new QWidget(QtParcerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(170, 20, 371, 181));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 70, 93, 28));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 30, 111, 22));
        QtParcerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtParcerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
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
        pushButton->setText(QApplication::translate("QtParcerClass", "\320\276\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtParcerClass: public Ui_QtParcerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTPARCER_H
