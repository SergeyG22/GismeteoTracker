#include "QtParcer.h"
#include <QtWidgets/QApplication>



int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtParcer w;
	w.show();
	return a.exec();
}
