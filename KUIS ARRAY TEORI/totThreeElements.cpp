#include <iostream>
#include <limits>

using namespace std;

void topThreeElements(int arr[], int N) {
    if (N < 3) {
        cout << "Input tidak sesuai, ukuran array kurang dari 3" << endl;
        return;
    }
    
    int max1 = numeric_limits<int>::min(), max2 = numeric_limits<int>::min(), max3 = numeric_limits<int>::min();
    int temp;

    for (int i = 0; i < N; i++) {
        temp = arr[i];
        
        if (temp > max1) {
            max3 = max2;
            max2 = max1;
            max1 = temp;
        } else if (temp > max2) {
            max3 = max2;
            max2 = temp;
        } else if (temp > max3) {
            max3 = temp;
        }
    }

    cout << max1 << " " << max2 << " " << max3 << endl;
}


int main() {
    int arr[] = {6, 8, 1, 9, 2, 1, 10};
    int N = sizeof(arr) / sizeof(arr[0]);

    topThreeElements(arr, N);
 return 0;
}