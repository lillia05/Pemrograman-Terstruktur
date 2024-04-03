#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> angka = {2,4,5,7,8};

    // mengembalikan nilai dari elemen pertama
    cout << angka.front() << endl;

    // mengembalikan nilai dari elemen terakhir
    cout << angka.back() << endl;

    // mengembalikan iterator yg menunjuk ke elemen pertama pada list
    list<int>::iterator it;
    for(it = angka.begin(); it != angka.end(); ++it)
        cout << *it << " ";
        cout << endl;
    
    // menambahkan elemen pada awal list
    angka.push_front(1);

    // menambahkan elemen pada akhir list
    angka.push_back(1);

    // mengeluarkan elemen pada awal list
    angka.pop_front();

    // mengeluarkan elemen pada akhir list
    angka.pop_back();

    // menghitung ukuran list
    cout << angka.size() <<endl;

    // mengecek apakah list kosong
    if(angka.empty())
        cout << "kosong" <<endl;
    else    
        cout << "berisi;" <<endl;
    
    // mengganti elemen dg elemen basic_streambu
    angka.assign(3,0);

    // menambahkan ellemen baru pada posisi yg ditentukan
    list<int>::iterator it = angka.begin();
    ++it;
    angka.insert(it,0);

    ++it;
    ++it;
    int arr[] = {11,12,13};
    angka.insert(it, begin(arr), end(arr));

    // memajukan iterator ke posisi yang ditentukan
    list<int>::iterator it = angka.begin();
    advance(it, 2);
    cout << *it;

    // // menghapus elemen pada posisi tertentu
    list<int>::iterator it = angka.begin();
    ++it;
    angka.erase(it);

    // menghapus semua elemen pada list dengan nilai tertentu
    angka.remove(2);

    // menghapus seluruh elemen dalam list sehingga list menjadi kosong
    angka.clear();
    cout << angka.size();
}