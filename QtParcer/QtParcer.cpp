#include "QtParcer.h"

// utf-8 for git


QtParcer::QtParcer(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.lineEdit->setText("https://www.gismeteo.ru/weather-sankt-peterburg-4079/now/");
	manager = new QNetworkAccessManager(this); // создаем обьект подключения
}

void QtParcer::on_pushButton_clicked()
{
	QUrl url(ui.lineEdit->text());            // получаем URL
	QNetworkRequest request(url);             // отправляем запрос по URL
	QNetworkReply* reply = manager->get(request); // получаем ответ
	connect(reply,SIGNAL(finished()),this,SLOT(replyFinished())); // генерируем слот подключения
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
