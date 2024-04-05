#include <iostream>
using namespace std;

int jumlahDigit(int angka){
    if(angka==0){
        return 0;
    }else{
        return(angka%10)+jumlahDigit(angka/10);
    }
}