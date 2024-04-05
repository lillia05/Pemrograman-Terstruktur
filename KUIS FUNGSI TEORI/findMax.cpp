#include <iostream>
using namespace std;

void findMax(){
    int N, data, max = 0;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> data;
    if(i==0 || data>max){
        max = data;
        }
    }
    cout << max;
}

int main(){
    findMax();
}