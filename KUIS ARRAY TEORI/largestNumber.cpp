#include <iostream>
using namespace std;


long largestNumber (int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] <= arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    long hasil = 0;
    int temp = 1;
    int tempArr = 0;
    for(int i = 0; i < n; i++){
        tempArr = arr[i] * temp;
        hasil += tempArr;
        temp *= 10;
    }
    return hasil;
}

int main (){
    int arr[] = {1,2,3,4,5};
    
    cout << largestNumber(arr, 5);

    return 0;
}