#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
    delete scenaGlowna;
}

Dialog::Dialog(C_Map *a, C_Frog *b, QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dialog),
    wsk(a),
    wskaznikNaZabe(b),
    scenaGlowna(new QGraphicsScene(0,0,szerokoscMapy, wysokoscMapy)),
    frogBImage(QImage ("C:/Users/Maciek/Desktop/mojprojekt/frog.png")),
    waterImage(QImage("C:/Users/Maciek/Desktop/mojprojekt/woda.jpg")),
    grassImage(QImage("C:/Users/Maciek/Desktop/mojprojekt/trawa.jpg")),
    asphaltImage(QImage("C:/Users/Maciek/Desktop/mojprojekt/jezdnia.png")),
    carBImage(QImage("C:/Users/Maciek/Desktop/mojprojekt/autko1.jpg")),
    waterB(QBrush(waterImage)),
    grassB(QBrush(grassImage)),
    asphaltB(QBrush(asphaltImage)),
    frogB(QBrush(frogBImage)),
    carB(QBrush(carBImage))

{
    ui->setupUi(this);
    rysujMape();
 //   wskaznikNaZabe->wysluchajRozkaz(prawo);
 //   wskaznikNaZabe->move();

    scenaGlowna->addRect((wskaznikNaZabe->returnPosition().x)*100, (this->wskaznikNaZabe->returnPosition().y)*100, 100,100, QPen(Qt::transparent), frogB);
//       rysujMape();
 //      scenaGlowna->addRect((wskaznikNaZabe->returnPosition().x)*100, (this->wskaznikNaZabe->returnPosition().y)*100, 100,100, QPen(Qt::transparent), frogB);
    ui->graphicsView->setScene(this->scenaGlowna);
    ui->graphicsView->setFixedSize(902,602);
 //   ui->graphicsView->update();

  sceneTimer = new QTimer(this);
    this->sceneTimer->start(2000);
   connect (this->sceneTimer, SIGNAL(timeout()), this, SLOT(advance()));
    connect (this->sceneTimer, SIGNAL(timeout()), this->scenaGlowna,SLOT(advance()));


}


void Dialog::rysujMape()
{
    for (int i = 0; i<(wsk->retLiczbaKomorekPion()); i++)
    {
        for (int j = 0; j<(wsk->retLiczbaKomorekPoziom()); j++)
        {
            if ((wsk->mapaGry[i][j].retTypeOfCell())==woda)
                scenaGlowna->addRect(j*100,i*100,100,100,QPen(Qt::transparent),waterB);
            if ((wsk->mapaGry[i][j].retTypeOfCell())==trawa)
                scenaGlowna->addRect(j*100,i*100,100,100,QPen(Qt::transparent),grassB);
            if ((wsk->mapaGry[i][j].retTypeOfCell())==asfalt)
                scenaGlowna->addRect(j*100,i*100,100,100,QPen(Qt::transparent),asphaltB);
        }
    }
}

void Dialog::advance()
{
    this->wskaznikNaZabe->wysluchajRozkaz(lewo);
    //rysujMape();
//   wskaznikNaZabe->move();
    //   this->scenaGlowna->addRect((this->wskaznikNaZabe->returnPosition().x)*100, (this->wskaznikNaZabe->returnPosition().y)*100, 100,100, QPen(Qt::transparent), frogB);
  //         this->scenaGlowna->addRect(100, 100, 100,100, QPen(Qt::transparent), frogB);
}





