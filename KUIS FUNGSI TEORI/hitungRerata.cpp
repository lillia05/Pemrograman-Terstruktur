#include <iostream>
using namespace std;

void hitungRerata(){
    double x, N, jumlah=0;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> x;
        jumlah = jumlah + x;
    }
    cout << jumlah/N;
}

int main(){
    hitungRerata();

    return 0;
}