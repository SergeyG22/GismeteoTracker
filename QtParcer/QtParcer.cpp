#include "QtParcer.h"
#include <qstring.h>
#include <qvector.h>
#include <qdebug.h>
#include <iostream>
#include <qregexp.h>
#include <qdatetime.h>
#include <qlistwidget.h>
#include <qfile.h>


// utf-8 for git


QtParcer::QtParcer(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	manager = new QNetworkAccessManager(this); // создаем обьект подключения
	connect(ui.comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),this,&QtParcer::send_to);
	connect(ui.comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &QtParcer::clear1);
	insert_city_http();        // используется для запроса в адресную строку браузера
	insert_city_combo_box();   // используется для визуального отображения в combo-box
	current_time();
	
	timer_data_change = new QTimer(this);
	timer_get_weather = new QTimer(this);
	connect(timer_data_change, &QTimer::timeout, this, &QtParcer::current_time);
	connect(timer_get_weather, &QTimer::timeout, this, &QtParcer::send_to);
	connect(ui.pushButton, &QPushButton::clicked, this,&QtParcer::clear1);


	timer_data_change->start(1000);
	timer_get_weather->start(60000);
}


void QtParcer::send_to() // функция отправляет запрос
{
	

	it = city.begin();

	for (; it != city.end(); ++it)
	{
		if (it.key() == ui.comboBox->currentData())
		{		    
			
			gismeteo = "https://www.gismeteo.ru/weather-" + it.value() + "-" + QString::number(it.key()) + "/now/";
			QUrl url(gismeteo);            // получаем URL
			QNetworkRequest request(url);             // отправляем запрос по URL
			QNetworkReply* reply = manager->get(request); // получаем ответ
			connect(reply, SIGNAL(finished()), this, SLOT(replyFinished())); // генерируем слот подключения
		}
	}	
}

void QtParcer::replyFinished()
{

	QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());

	if (reply->error() == QNetworkReply::NoError)                    // если нет ошибок
	{
		QByteArray content = reply->readAll();                       // сохраняем в массив байтов
		QTextCodec* codec = QTextCodec::codecForName("utf-8");       // преобразуем кодировку
		get_html= QString(content);
		QRegExp rx("\"C\":....");                                    // парсер html
		int pos = rx.indexIn(get_html);
		QStringList list = rx.capturedTexts();
		QStringList::iterator iter;
		for (iter = list.begin(); iter != list.end(); ++iter)
		{
			temperature = (*iter).toLocal8Bit().constData();
			temperature.remove(0, 4);
			
		}   
	 for (int i = 0; i < temperature.size(); ++i)   // правит косяк с некорректным отображением
		{
			
			if (temperature[i] == ",")
			{				
				temperature.remove(",\"");
				temperature += ".0";
				break;	
			}
			
		}

		ui.label_weather->setText("+" + temperature);
		
	//	ui.listWidget->addItem(temperature + ' ' + current_time());
	
		if (b1) { current_t = temperature.toDouble(); b1 = false; } 

		if (current_t != temperature.toDouble())                   // если значения отличаются друг от друга 
		{
			current_t = temperature.toDouble();                    // присваиваем текущее значение прошлому и 
			ui.listWidget->addItem(temperature + ' ' + current_time()); // добавляем в список для отображения 		
		}
		//codec->toUnicode(content.data())
	}
	else                                                            // если ошибка
	{ 
		ui.label_weather->setText("Host not found!");            // то выводим ошибку
	}

	
	reply->deleteLater();                                       //удаляем обьект ответа
}

void QtParcer::clear1()
{
	if (!ui.checkBox_change_list->isChecked()) {ui.listWidget->clear();}			
};











void QtParcer::insert_city_http() // функция добавляет города в http запрос 
{
	city.insert(3915,"arkhangelsk");
	city.insert(4578,"omsk");
	city.insert(5026,"voronezh");
	city.insert(4079,"sankt-peterburg");
	city.insert(4720,"barnaul");
	city.insert(5089, "volgograd");
	city.insert(4618,"samara");
	city.insert(4368,"moscow");
	city.insert(4652, "tomsk");
	city.insert(4476, "perm");
	city.insert(4588, "ufa");
}

void QtParcer::insert_city_combo_box() // функция добавляет города в комбо-бокс
{
	ui.comboBox->addItem(QString::fromLocal8Bit("Архангельск"),3915);
	ui.comboBox->addItem(QString::fromLocal8Bit("Омск"), 4578);
	ui.comboBox->addItem(QString::fromLocal8Bit("Воронеж"), 5026);
	ui.comboBox->addItem(QString::fromLocal8Bit("Санкт-Петербург"),4079);
	ui.comboBox->addItem(QString::fromLocal8Bit("Барнаул"), 4720);
	ui.comboBox->addItem(QString::fromLocal8Bit("Волгоград"),5089);
	ui.comboBox->addItem(QString::fromLocal8Bit("Самара"), 4618);
	ui.comboBox->addItem(QString::fromLocal8Bit("Москва"), 4368);
	ui.comboBox->addItem(QString::fromLocal8Bit("Томск"), 4652);
	ui.comboBox->addItem(QString::fromLocal8Bit("Пермь"), 4476);
	ui.comboBox->addItem(QString::fromLocal8Bit("Уфа"), 4588);

}

