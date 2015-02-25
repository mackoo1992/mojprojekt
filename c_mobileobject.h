#ifndef C_MOBILEOBJECT_H
#define C_MOBILEOBJECT_H


#include "c_map.h"


class C_MobileObject
{
public:
    C_MobileObject();

    C_Map *wskMapaZaba;

    virtual OrderDirection returnKierunek()=0;
    virtual S_Point returnPosition()=0;
    virtual S_Point returnSize()=0;
    virtual S_Point returnStartPosition()=0;
    virtual void changePosition(int, int)=0;
    virtual void changeDirection(OrderDirection)=0;
    virtual void setStartPosition()=0;
    virtual void move()=0;
protected:
    S_Point position;
    S_Point size;
    OrderDirection kierunek;
    S_Point startPosition;
};

#endif // C_MOBILEOBJECT_H
