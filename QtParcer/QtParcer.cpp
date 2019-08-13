#include "QtParcer.h"

QtParcer::QtParcer(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.lineEdit->setText("https://www.gismeteo.ru/weather-sankt-peterburg-4079/now/");
	manager = new QNetworkAccessManager(this);
}

void QtParcer::on_pushButton_clicked()
{
	QUrl url(ui.lineEdit->text());
	QNetworkRequest request(url);
	QNetworkReply* reply = manager->get(request);
	connect(reply,SIGNAL(finished()),this,SLOT(replyFinished()));
}

void QtParcer::replyFinished()
{
	QNetworkReply* reply = qobject_cast<QNetworkReply*>(sender());

	if (reply->error() == QNetworkReply::NoError)
	{
		QByteArray content = reply->readAll();
		QTextCodec* codec = QTextCodec::codecForName("utf-8");
		ui.textEdit->setPlainText(codec->toUnicode(content.data()));		
	}
	else
	{
		ui.textEdit->setPlainText(reply->errorString());
	}

	
	reply->deleteLater();
}
