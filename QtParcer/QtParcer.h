#pragma once

#include <QtWidgets/QMainWindow>
#include <qurl.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkrequest.h>
#include <qnetworkreply.h>
#include <qtextcodec.h>
#include <qstring.h>
#include <qvector.h>
#include <qmap.h>
#include "ui_QtParcer.h"



class QtParcer : public QMainWindow
{
	Q_OBJECT
public:
	QtParcer(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtParcerClass ui;
	QNetworkAccessManager* manager;
	QMap<int, QString>city;
	QMap<int, QString>::iterator it;
	QString gismeteo;
	void insert_city_http();
	void insert_city_combo_box();
private slots:	
	void on_pushButton_clicked();
	void replyFinished();
};
