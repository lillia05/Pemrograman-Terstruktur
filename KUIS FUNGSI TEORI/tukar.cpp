#include <iostream>
using namespace std;

void tukar(int &a, int &b, int &c){
    int temp;
    
    if(a>b){
        a = b;
        b = temp;
    }
    if(b>c){
        int temp = b;
        b = c;
        c = temp;
    }
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
}

int main(){
    int a=114, b=22, c=13;
        tukar(a,b,c);
    cout << a << " " << b <<" " << c << endl;
}