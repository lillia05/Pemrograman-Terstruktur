#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<char> huruf = {'j', 'i', 'h', 'a', 'n'};
    
    // mengembalikan nilai elemen pertama
    huruf.front() = 'h';
    
    // mengembalikan nilai dari elemen terakhir
    huruf.back() = 'h';
    cout << huruf.back() << endl;

    //mengembalikan iterator yg menunjuk ke elemen pertama
    for (auto it = huruf.begin(); it != huruf.end(); it++)
        cout << *it << " ";
        cout << endl;

    // untuk mengakses elemen pada posisi tertentu
    cout << huruf.at(3) << endl;

    // untuk menambahkan elemen pada akhir vector
    huruf.push_back('o');

    // untuk mengeluarkan elemen ada akhir vector
    huruf.pop_back();

    // mengembalikan ukuran vector
    cout << huruf.size() <<endl;

    // untu mengecek apakah vector kosong atau tidak
    cout << huruf.empty() << endl;

    // untuk mengganti elemen dalam vector dengan elemen baru dan menyesuaikan ukuran vector
    char a[] = {'h','a','i'};
    int len = sizeof(a) / sizeof(a[0]);
    huruf.assign(a,a+len);

    // menambahkan elemen baru pada posisi yg ditentukan
    huruf.insert(huruf.begin()+2, 'g');

    // menghapus elemen pada posisi tertentu vector
    huruf.erase(huruf.begin(), huruf.begin()+3);

    // menghapus seluruh elemen vector
    huruf.clear();
    cout << huruf.empty();
}