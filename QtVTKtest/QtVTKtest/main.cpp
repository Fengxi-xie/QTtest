#include "QtVTKtest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtVTKtest w;
    w.show();
    return a.exec();
}
