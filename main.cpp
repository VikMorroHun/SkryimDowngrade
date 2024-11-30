#include "skmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SKMainWindow w;
	w.show();
	return a.exec();
}
