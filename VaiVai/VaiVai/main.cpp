#include "vaivai.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VaiVai w;
	w.show();
	return a.exec();
}
