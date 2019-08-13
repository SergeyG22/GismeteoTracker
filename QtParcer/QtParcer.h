#pragma once

#include <QtWidgets/QMainWindow>
#include <qurl.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkrequest.h>
#include <qnetworkreply.h>
#include <qtextcodec.h>
#include "ui_QtParcer.h"



class QtParcer : public QMainWindow
{
	Q_OBJECT
public:
	QtParcer(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtParcerClass ui;
	QNetworkAccessManager* manager;
private slots:
	void on_pushButton_clicked();
	void replyFinished();
};
