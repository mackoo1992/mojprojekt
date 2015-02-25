#ifndef DIALOG_H
#define DIALOG_H



#include <QPainter>
#include <QTimer>
#include <QMainWindow>
#include <QDialog>
#include <QtCore>
#include <QtGui>
#include <QObject>
#include <QImage>
#include <QGraphicsScene>
#include "c_frog.h"
#include "c_map.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    QGraphicsScene *scenaGlowna;
    C_Map *wsk;
    C_Frog *wskaznikNaZabe;
    Dialog(C_Map * , C_Frog *, QWidget *parent = 0);
    void rysujMape();



private:
    QTimer *sceneTimer;
    Ui::Dialog *ui;
       static const int wysokoscMapy = 600;
       static const int szerokoscMapy = 900;
       QImage waterImage;
       QImage grassImage;
       QImage asphaltImage;
       QImage frogBImage;
       QImage carBImage;
       QBrush waterB;
       QBrush grassB;
       QBrush asphaltB;
       QBrush frogB;
       QBrush carB;

private slots:
    void advance();

};

#endif // DIALOG_H
