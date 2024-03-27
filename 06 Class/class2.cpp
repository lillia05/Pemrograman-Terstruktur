#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        string nama, npm;

        void Perkenalan(){
            cout << "Nama : "<< nama << endl;
            cout << "NPM : " << npm << endl;
        }
};

int main(){
    Mahasiswa Mhs;

    cin >> Mhs.nama;
    cin >> Mhs.npm;

    Mhs.Perkenalan();

    return 0;
}