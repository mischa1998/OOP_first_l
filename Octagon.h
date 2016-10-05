#ifndef Octagon_h
#define Octagon_h
#include "figure.h"
#include <cstdlib>
#include <iostream>

class Octagon : public Figure
{
public:
    Octagon();
    Octagon(std::istream &is);
    double Square() override;
    void Print() override;
    ~Octagon();
private:
    double x[8];
    double y[8];
};
#endif
