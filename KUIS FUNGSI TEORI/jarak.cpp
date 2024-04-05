#include <iostream>
#include <cmath>
using namespace std;

double jarak(double x1, double y1, double x2, double y2){
    double hasil, a, b;

    a= x2-x1;
    b= y2-y1;

    a= a*a;
    b= b*b;

    return hasil = sqrt(a + b);
}