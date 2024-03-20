#include <iostream>
using namespace std;

class Mahasiswa{
    public:
        string nama, npm;

        Mahasiswa(string nama, string b){
            this->nama = nama;
            npm = b;
        }
};

int main(){
    Mahasiswa Mhs("Lia", "2317051097");

    cout << "Nama: " << Mhs.nama << endl;
    cout << "NPM: " << Mhs.npm << endl;
}