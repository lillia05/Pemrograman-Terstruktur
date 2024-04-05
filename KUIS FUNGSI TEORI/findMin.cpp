#include <iostream>
using namespace std;

void findMin(){
    int N, data, min = 0;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> data;
    if(i==0 || data<min){
        min = data;
        }
    }
    cout << min;
}

int main(){
    findMin();
}