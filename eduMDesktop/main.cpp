#include <QtGui/QApplication>
#include "eduMAppMenu.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    eduMAppMenu w;
    w.show();

    a.applicationDirPath();

    return a.exec();
}
