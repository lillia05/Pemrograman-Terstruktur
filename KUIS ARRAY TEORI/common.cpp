#include <iostream>
using namespace std;

void common (int a[], int b[], int c[], int x, int y, int z){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            for(int k = 0; k < z; k++){
                if(a[i] == b[j] && a[i] == c[k] && b[j] == c[k]){
                    cout << c[k] << " ";
                }
            }
        }
    }

}


int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int b[] = {1,3,5,6,7,8,12};
    int c[] = {2,3,4,5,8,9};

    int x = sizeof(a)/sizeof(a[0]);
    int y = sizeof(b)/sizeof(b[0]);
    int z = sizeof(c)/sizeof(c[0]);
    common(a, b, c, x, y, z);
    return 0;
}