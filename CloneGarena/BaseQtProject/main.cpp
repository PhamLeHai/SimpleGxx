#include "baseqtproject.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	BaseQtProject w;
	w.show();
	return a.exec();
}
