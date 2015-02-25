#ifndef C_FROG_H
#define C_FROG_H

#include "c_mobileobject.h"



class C_Frog :public C_MobileObject
{
public:
    C_Frog();
    C_Frog(C_Map *, OrderDirection );

    void wysluchajRozkaz(OrderDirection);
    OrderDirection returnKierunek();
    S_Point returnPosition();
    S_Point returnSize();
    S_Point returnStartPosition();
    void changePosition(int, int);
    void changeDirection(OrderDirection);
    void setStartPosition();
    void move();
private:
    OrderDirection rozkaz;
};

#endif // C_FROG_H
