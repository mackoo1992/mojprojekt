#ifndef C_PAINTER_H
#define C_PAINTER_H

#include <QImage>
#include <QBrush>



class C_Painter
{
public:
    C_Painter();
 //   static void rysujMape(C_Map *, QGraphicsScene *);

//     static const QGraphicsScene *scene;
     static const int wysokoscMapy = 600;
     static const int szerokoscMapy = 900;
     QImage waterImage; // =  QImage("C:/Users/Maciek/Desktop/mojprojekt/trawa.jpg");
     QImage grassImage; //=  QImage("C:/Users/Maciek/Desktop/mojprojekt/woda.jpg");
     QImage asphaltImage; //= QImage("C:/Users/Maciek/Desktop/mojprojekt/jezdnia.png");
     QImage frogBImage; //= QImage ("C:/Users/Maciek/Desktop/mojprojekt/zaba1.png");
     QBrush waterB; //= QBrush(waterImage);
     QBrush grassB; // = QBrush(grassImage);
     QBrush asphaltB; //= QBrush(asphaltImage);
     QBrush frogB; //= QBrush(frogBImage);
private:
};

#endif // C_PAINTER_H


//this->frogBImage =QImage ("C:/Users/Maciek/Desktop/mojprojekt/zaba1.png");
//this->frogB = QBrush(frogBImage);
//this->waterImage = QImage("C:/Users/Maciek/Desktop/mojprojekt/trawa.jpg");
//this->waterB = QBrush(waterImage);
//this->grassImage = QImage("C:/Users/Maciek/Desktop/mojprojekt/woda.jpg");
//this->grassB = QBrush(grassImage);
//this->asphaltImage = QImage("C:/Users/Maciek/Desktop/mojprojekt/jezdnia.png");
//this->asphaltB = QBrush(asphaltImage);
