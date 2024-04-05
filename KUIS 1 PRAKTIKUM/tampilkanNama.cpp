#include <iostream>
#include <stdlib.h>
using namespace std;

 void tampilkanNama(char[][100], int n){
    for(int i=0; i<n; i++){
        char* endptr;
        long value = strtol(str[i], &endptr, 10);
        cout<<"Nama : "<<endptr<<endl;
        cout<<"NPM : "<<value<<endl;
        cout endl;
    }
}

int main(){

}