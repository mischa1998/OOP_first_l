#include "Triangle.h"
#include "function.h"
#include <iostream>
#include <math.h>
using namespace std;


double det(double x_1, double y_1, double x_2, double y_2)
{
    return x_1 * y_2 - y_1 * x_2;
}

Triangle::~Triangle()
{
    return;
}

Triangle::Triangle(istream &is)
{
    for (int i = 0; i < 3; i++) {
        is >> x[i];
        is >> y[i];
    }
}

Triangle::Triangle()
{
    int i;
    for (i = 0; i < 3; i++) {
        cin>>x[i];
        cin>>y[i];
    }
}

void Triangle::Print()
{
    int i;
    cout<<"\nTriangle"<<endl;
    for (i = 0; i < 3; i++) {
        cout << x[i] << " " << y[i] << endl;
    }
}

double Triangle::Square()
{
    int i;
    double result = 0;
    for (i = 0; i < 2; i++) {
        result += det(x[i], y[i], x[i + 1], y[i + 1]);
    }
    result += det(x[2], y[2], x[0], y[0]);
    return fabs(result / 2.0);
}
