#include "flowerlighter.h"

#ifdef AVR
int main(int argc, char *argv) {
    FlowerLighter::get().run();
}
#else

#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

#endif
