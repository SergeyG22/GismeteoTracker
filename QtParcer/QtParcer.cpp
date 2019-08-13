#include "QtParcer.h"
#include <qstring.h>
#include <qvector.h>
#include <qdebug.h>
#include <iostream>
// utf-8 for git


QtParcer::QtParcer(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	manager = new QNetworkAccessManager(this); // создаем обьект подключения	
	insert_city_http();        // используется для запроса в адресную строку браузера
	insert_city_combo_box();   // используется для визуального отображения в combo-box
	
}

void QtParcer::on_pushButton_clicked()
{
	it = city.begin();

	for (; it != city.end(); ++it)
	{
		if (it.key() == ui.comboBox->currentData())
		{		    
			
			gismeteo = "https://www.gismeteo.ru/weather-" + it.value() + "-" + QString::number(it.key()) + "/now/";
			ui.lineEdit->setText(gismeteo);	
			QUrl url(ui.lineEdit->text());            // получаем URL
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
		ui.textEdit->setPlainText(codec->toUnicode(content.data())); // выводим результат	
	}
	else                                                            // если ошибка
	{ 
		ui.textEdit->setPlainText(reply->errorString());            // то выводим ошибку
	}

	
	reply->deleteLater();                                       //удаляем обьект ответа
}

void QtParcer::insert_city_http() // функция добавляет города в http запрос 
{
	city.insert(3915,"arkhangelsk");
	city.insert(4578,"omsk");
	city.insert(5026,"voronezh");
}

void QtParcer::insert_city_combo_box() // функция добавляет города в комбо-бокс
{
	ui.comboBox->addItem(QString::fromLocal8Bit("Архангельск"),3915);
	ui.comboBox->addItem(QString::fromLocal8Bit("Омск"), 4578);
	ui.comboBox->addItem(QString::fromLocal8Bit("Воронеж"), 5026);
}
