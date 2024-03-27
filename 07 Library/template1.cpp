#include <iostream>
using namespace std;

// int jumlah(int a, int b){
//     return a + b;
// }

// double jumlah(double a, double b){
//     return a + b;
// }

template <typename T> //menggunakan template cukup menggunakan 1 fungsi

T jumlah(T a, T b){
    return a + b;
}

int main(){
    int a = 10, b = 20;
    double x = 2.5, y = 7.5;

    cout << jumlah(a,b) << endl;
    cout << jumlah(x,y) << endl;
}