#include <iostream>
#include <cmath>
using namespace std;

double integrate(int k, double a, double b){
    int n = 1000;
    double r, f, x, jumlah;
    r = (b-a)/n;
    jumlah = r* (pow(b,k)+pow(a,k))/2;

    for (int i=1; i<n; i++){
        x=a+i*r;
        f=pow(x,k);
        jumlah = jumlah + f*r;
    }
    return jumlah;
}

int main(){
    cout << integrate(3,2,4);
}