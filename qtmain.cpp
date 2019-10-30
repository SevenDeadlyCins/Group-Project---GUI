#include <QApplication>

#include "sevencins.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	SevenCins runIt;
	runIt.show();
	return app.exec();
}
