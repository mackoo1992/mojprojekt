#ifndef C_CELL_H
#define C_CELL_H

#include "typy.cpp"

class C_Cell
{
public:
    C_Cell();
    ~C_Cell();

    TypeOfCell retTypeOfCell()
    {
        TypeOfCell typKomorkiV = *this->typKomorki;
        return typKomorkiV;
    }

    S_Point retS_Point()
    {
        S_Point polozenieV = *this->polozenie;
        return polozenieV;
    }
    TypeOfCell changeTypeOfCell(TypeOfCell a)
    {
        *this->typKomorki = a;
        return a;
    }
    S_Point retS_Point(S_Point a)
    {
        *this->polozenie = a;
        return a;
    }


private:
    TypeOfCell *typKomorki;
    S_Point *polozenie;


};

#endif // C_CELL_H
