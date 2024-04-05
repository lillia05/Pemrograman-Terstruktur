#include <iostream>
using namespace std;

int getExtraElement(int arrA[], int arrB[], int n){
    int arrT[n+1];
    arrT[n] = 1000000000;
    for (int i = 0; i < n ; i++){
        arrT[i] = arrA[i];
    }

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if(arrT[i] <= arrT[j]){
                swap(arrT[i], arrT[j]);
            }
            if(arrB[i] <= arrB[j]){
                swap(arrB[i], arrB[j]);
            }
        }
    }

    for(int i = 0 ; i <= n ; i++){
        if(arrB[i] != arrT[i]){
            return arrB[i];
        }
    }
    // for(int i = 0; i < n+1; i++){
    //     cout << arrT[i] << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < n+1; i++){
    //     cout << arrB[i] << " ";
    // }
    return 0;
}


int main(){

    int arrA[] = {1,4,2,5,7};
    int arrB[] = {1,2,4,1,7,5};

    cout << getExtraElement(arrA, arrB, 5);

    return 0;
}