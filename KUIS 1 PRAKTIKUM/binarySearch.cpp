#include <iostream>
using namespace std;

int main(){
    int n, p;
    cin >> n;
    int arr[n];
    
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    cin >> p;
    int hasil = 0;

    for(int i=0; i < n; i++){
        if(arr[i] == p){
            hasil++;
        }
    } 

    if(hasil == 0){
        cout << "Tidak Ditemukan" << endl;
    }else if(hasil != 0){
        cout << hasil;
    }

    return 0;
}