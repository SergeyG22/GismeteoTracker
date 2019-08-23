#include "QtParcer.h"
#include <QtWidgets/QApplication>
#include <qcustomplot.h>


int main(int argc, char *argv[])
{
	setlocale(LC_ALL,"rus");
	QApplication a(argc, argv);

	QtParcer w;
	w.show();
	return a.exec();
}
