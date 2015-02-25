#ifndef C_MAP_H
#define C_MAP_H
#include "c_cell.h"

class C_Map
{
public:
    C_Map();
    ~C_Map();
    void tworzMape();
    static int retLiczbaKomorekPion()
    {
        return liczbaKomorekPion;
    }
    static int retLiczbaKomorekPoziom()
    {
        return liczbaKomorekPoziom;
    }
    C_Cell **mapaGry;
private:
    static const int liczbaKomorekPoziom = 9;
    static const int liczbaKomorekPion = 6;
};

#endif // C_MAP_H
