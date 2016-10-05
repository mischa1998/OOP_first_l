#ifndef Hexagon_h
#define Hexagon_h
#include "figure.h"
#include <cstdlib>
#include <iostream>

class Hexagon : public Figure
{
public :
    Hexagon(std::istream &(is));
    Hexagon();
    double Square() override;
    void Print() override;
    ~Hexagon();
private :
    double x[6];
    double y[6];
};
#endif
