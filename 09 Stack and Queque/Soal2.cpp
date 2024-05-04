//cara pertama
#include <iostream>
#include <queue>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    queue<int> bilGenap;
    
    for(int i = 0; i < N; ++i){
        int angka;
        cin >> angka;
        if((i + 1) % 2 == 0){
            bilGenap.push(angka);
        }
    }
    
    while(!bilGenap.empty()){
        cout << bilGenap.front() << " ";
        bilGenap.pop();
    }
    
    cout << endl;
    
    return 0;
}


//cara kedua
#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    int data[n];
    for (int i=0;i<n;i++)
        cin>>data[i];
    for (int i=1;i<n;i+=2)
        cout<<data[i]<<" ";
}