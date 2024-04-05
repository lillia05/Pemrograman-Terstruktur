#include <iostream>
using namespace std;


long sumOfDis(int arr[], int n){
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(arr[i] <= arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    long hasil = arr[0];
    int temp = arr[0]; 
    for(int i = 0; i < n; i++){
        if(arr[i] != temp){
            hasil += arr[i];
            temp = arr[i];
        }
    }
    return hasil;
}

int main(){
    int arr[] = {1,6,4,3,2,2,3,8,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << sumOfDis(arr, n);


    return 0;
}   