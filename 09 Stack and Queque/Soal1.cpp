//cara pertama
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    cin >> N;

    queue<int> bilGanjil;

    for (int i = 0; i < N; ++i) {
        int angka;
        cin >> angka;
        if (angka % 2 == 1) {
            bilGanjil.push(angka);
        }
    }

    while (!bilGanjil.empty()) {
        cout << bilGanjil.front() << " ";
        bilGanjil.pop();
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
    for (int i=0;i<n;i++)
        if (data[i]%2)
            cout<<data[i]<<" ";
}