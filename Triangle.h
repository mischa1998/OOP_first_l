#ifndef Triangle_h
#define Triangle_h
#include "figure.h"
#include <cstdlib>
#include <iostream>

class Triangle : public Figure 
{
public:
    Triangle(std::istream &is);
    Triangle();
    double Square() override;
    void Print() override;
    ~Triangle();
private:
    double x[3];
    double y[3];
};
#endif
