#include "mouse.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mouse w;
    w.show();
    return a.exec();
}
