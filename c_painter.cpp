#include "c_painter.h"

C_Painter::C_Painter()
{

    frogBImage =QImage ("C:/Users/Maciek/Desktop/mojprojekt/zaba1.png");
    frogB = QBrush(frogBImage);
    waterImage = QImage("C:/Users/Maciek/Desktop/mojprojekt/trawa.jpg");
    waterB = QBrush(waterImage);
    grassImage = QImage("C:/Users/Maciek/Desktop/mojprojekt/woda.jpg");
    grassB = QBrush(grassImage);
    asphaltImage = QImage("C:/Users/Maciek/Desktop/mojprojekt/jezdnia.png");
    asphaltB = QBrush(asphaltImage);

}
/*  void C_Painter::rysujMape(C_Map *a, QGraphicsScene *scena)
{
        QImage waterImage =  QImage("C:/Users/Maciek/Desktop/mojprojekt/trawa.jpg");
          QImage grassImage =  QImage("C:/Users/Maciek/Desktop/mojprojekt/woda.jpg");
          QImage asphaltImage = QImage("C:/Users/Maciek/Desktop/mojprojekt/jezdnia.png");
          QImage frogBImage = QImage ("C:/Users/Maciek/Desktop/mojprojekt/zaba1.png");
          QBrush waterB = QBrush(waterImage);
          QBrush grassB = QBrush(grassImage);
          QBrush asphaltB = QBrush(asphaltImage);
          QBrush frogB = QBrush(frogBImage);

    scene = new QGraphicsScene(0,0,C_Painter::szerokoscMapy, C_Painter::wysokoscMapy);
    for (int i = 0; i<(a->liczbaKomorekPion); i++)
    {
        for (int j = 0; j<(a->liczbaKomorekPoziom); j++)
        {
            if ((a->mapaGry[i][j].retTypeOfCell())==woda)
                scene->addRect(0,0,100,100,QPen(Qt::transparent),waterB);

        }
    }
   *scena = *scene;
}
*/
