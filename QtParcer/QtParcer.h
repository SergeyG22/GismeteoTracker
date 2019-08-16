#pragma once

#include <QtWidgets/QMainWindow>
#include <qurl.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkrequest.h>
#include <qnetworkreply.h>
#include <qtextcodec.h>
#include <qstring.h>
#include <qvector.h>
#include <qtimer.h>
#include <qmap.h>
#include <qcheckbox.h>
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
	bool b1 = true;
	double current_t;
	QString gismeteo;
	QString get_html;
	QString temperature;
	QTimer *timer_data_change;
	QTimer* timer_get_weather;
	void insert_city_http();
	void insert_city_combo_box();	
	inline QString QtParcer::current_time()
	{
		QDateTime data = QDateTime::currentDateTime();
		ui.label_data_time->setText(QString::fromLocal8Bit("Обновлено: ") + data.toString());
		return data.toString();
	};
	
public slots:
	void clear1();
	void send_to();
	void replyFinished();
	
	
};
