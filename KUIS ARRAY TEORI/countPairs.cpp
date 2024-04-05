#include <iostream>
using namespace std;

int countPairs(int arr[], int n){
    int count = 0;

    for (int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            int temp = arr[i] + arr[j];
            if(temp % 2 == 0){
                count++;
            }
        }
    }
    return count;
}

// 6,7,1,3,2,5,4
int main(){

    int arr[7] = {6,7,1,3,2,5,4};
    cout << countPairs(arr, 7);

    return 0;
}