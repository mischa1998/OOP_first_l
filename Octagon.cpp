#include "Octagon.h"
#include <iostream>
using namespace std;

Octagon::~Octagon()
{
    return;
}

Octagon::Octagon(istream &is)
{
    int i;
    for (i = 0; i < 8; i++) {
        is >> x[i];
        is >> y[i];
    }
}

Octagon::Octagon()
{
    int i;
    for (i = 0; i < 8; i++) {
        cin>>x[i];
        cin>>y[i];
    }
}

void Octagon::Print()
{
    int i;
    cout<<"\nOctagon"<<endl;
    for (i = 0; i < 8; i++) {
         cout << x[i] << " " << y[i] << endl;
    }
}

double Octagon::Square()
{
    int i;
    double result = 0;
    for (i = 0; i < 7; i++) {
        result += det(x[i], y[i], x[i + 1], y[i + 1]);
    }
    result += det(x[7], y[7], x[0], y[0]);
    return fabs(result / 2.0);
}
