#include "c_frog.h"

C_Frog::C_Frog()
{
    setStartPosition();
}

C_Frog::C_Frog(C_Map *wskaznikZabaNaMapie, OrderDirection b)
    :
     rozkaz(b)
{
    this->wskMapaZaba = wskaznikZabaNaMapie;
    setStartPosition();
}
OrderDirection C_Frog::returnKierunek()
{
    return kierunek;
}
S_Point C_Frog::returnPosition()
{
    return position;
}
S_Point C_Frog::returnSize()
{
    return size;
}
S_Point C_Frog::returnStartPosition()
{
    return startPosition;
}
void C_Frog::changePosition(int x, int y)
{
    position.x = x;
    position.y = y;
}

void C_Frog::changeDirection(OrderDirection zwrot)
{
    kierunek = zwrot;
}
void C_Frog::setStartPosition()
{
    startPosition.x = ((wskMapaZaba->retLiczbaKomorekPoziom())-1)/2;
    startPosition.y = (wskMapaZaba->retLiczbaKomorekPion())-1;
    position = startPosition;
}
void C_Frog::move()
{
    if ((this->rozkaz == gora)&&((position.y)>0))
    {
        (this->position.y)--;
        this->changeDirection(this->rozkaz);
    }
    if ((this->rozkaz == dol)&&((this->position.y)<((this->wskMapaZaba->retLiczbaKomorekPion())-1)))
    {
        (this->position.y)++;
        this->changeDirection(this->rozkaz);
    }
    if ((this->rozkaz == prawo)&&((this->position.x)<((this->wskMapaZaba->retLiczbaKomorekPoziom())-1)))
    {
        (this->position.x)++;
        this->changeDirection(this->rozkaz);
    }
    if ((this->rozkaz == lewo)&&((this->position.x)>0))
    {
        (this->position.x)--;
        this->changeDirection(this->rozkaz);
    }
    this->rozkaz = nic;
}
void C_Frog::wysluchajRozkaz(OrderDirection a)
{
    switch (a) {
    case gora:
        this->rozkaz = gora;
        break;
    case dol:
        this->rozkaz = dol;
        break;
    case prawo:
        this->rozkaz = prawo;
        break;
    case lewo:
        this->rozkaz = lewo;
        break;
    default:
        break;
    }
}
