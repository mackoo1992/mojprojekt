#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    C_Map *komorka = new C_Map;

    C_Frog *wskaznikZaby = new C_Frog(komorka, nic);

    Dialog w(komorka, wskaznikZaby);

 //   w.setWindowTitle("Frog Game");

    w.show();
    delete wskaznikZaby;
    delete komorka;
    return a.exec();

}
