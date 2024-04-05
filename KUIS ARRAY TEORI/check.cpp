#include <iostream>
using namespace std;

bool check(int arr[], int n){
    for(int i=0; i<n-2; i++){
        if(arr[i] % 2 == 1 && arr[i+1] % 2 == 1 && arr[i+2] % 2 == 1){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5] = {2,4,1,3,5};
    cout << check(arr, 5);
    return 0;
}