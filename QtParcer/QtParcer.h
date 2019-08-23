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
#include <qfile>
#include <qcustomplot.h>
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
	QVector<double> x_time;
	QVector<double> y_temperature;
	bool b1 = true;
	double current_t;
	QTime t;
	QString city_name;
	QString gismeteo;
	QString get_html;
	QString temperature;
	QTimer *draw_graph; 
	QTimer *timer_data_change;
	QTimer* timer_get_weather;
	QCPAxisTickerDateTime time_d;
	void insert_city_http();
	void insert_city_combo_box();
	void draw_graph_t();
	QDateTime data;
	QCPGraph* dwPoints;
	inline QString current_time()
	{
		data = QDateTime::currentDateTime();
		ui.label_data_time->setText(QString::fromLocal8Bit("Обновлено: ") + data.toString());
		return data.toString();
	};
	
public slots:
	void graph();
	void clear1();
	void send_to();
	void replyFinished();
	void clear_graph();
	
};
