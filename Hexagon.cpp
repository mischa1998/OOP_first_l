#include "Hexagon.h"
#include <iostream>
using namespace std;

Hexagon::~Hexagon()
{
    return;
}

Hexagon::Hexagon(istream &is)
{
    int i;
    for (i = 0; i < 6; i++) {
        is >> x[i];
        is >> y[i];
    }
}

Hexagon::Hexagon()
{
    int i;
    for (i = 0; i < 6; i++) {
        cin>>x[i];
        cin>>y[i];
    }
}

void Hexagon::Print()
{
    int i;
    cout<<"\nHexagon"<<endl;
    for (i = 0; i < 6; i++) {
         cout << x[i] << " " << y[i] << endl;
    }
}

double Hexagon::Square()
{
    int i;
    double result = 0;
    for (i = 0; i < 5; i++) {
        result += det(x[i], y[i], x[i +1], y[i + 1]);
    }
    result += det(x[5], y[5], x[0], y[0]);
    return fabs(result / 2.0);
}
