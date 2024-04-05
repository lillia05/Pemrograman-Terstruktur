#include <iostream>
using namespace std;

void dupzero(int arr[], int n){
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i] == 0) {
            for (int j = n - 2; j > i; --j) {
                arr[j + 1] = arr[j];
            }
            arr[i + 1] = 0;
            ++i;
        }
    }
}

int main(){
    int arr[8] = {1,0,2,3,0,4,5,0};
    dupzero(arr, 8);
    for(int i = 0; i < 8; i++){
        cout << arr[i] << " ";
    }
    return 0;
}