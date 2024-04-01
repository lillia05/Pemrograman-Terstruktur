#include <iostream>
#include <ctime>
using namespace std;

template<class T>
class umur {
private:
    T tanggal, bulan, tahun;

public:
    umur(T tanggal, T bulan, T tahun) : tanggal(tanggal), bulan(bulan), tahun(tahun) {
    }

    T getTanggal() const {
        return tanggal;
    }

    void setTanggal(T tanggal) {
        this->tanggal = tanggal;
    }

    T getBulan() const {
        return bulan;
    }

    void setBulan(T bulan) {
        this->bulan = bulan;
    }

    T getTahun() const {
        return tahun;
    }

    void setTahun(T tahun) {
        this->tahun = tahun;
    }

    void HitungUmur() const;

    static int HitungHari(T bulan, T tahun);

    bool HitungKabisat();
};

template<class T>
void umur<T>::HitungUmur() const {
        time_t now = time(0);
        tm* localTime = localtime(&now);
        int tahunNow = 1900 + localTime->tm_year;
        int bulanNow = 1 + localTime->tm_mon;
        int tanggalNow = localTime->tm_mday;

        int Tahun = tahunNow - tahun;
        int Bulan = bulanNow - bulan;
        int Hari = tanggalNow - tanggal;

        if (Bulan < 0 || (Bulan == 0 && Hari < 0)) {
            Tahun--;
            Bulan += 12;
        }
        if (Hari < 0) {
            Bulan--;
            Hari += HitungHari(bulan, tahun);
        }
        cout << "Umur Anda adalah " << Tahun << " tahun, " << Bulan << " bulan, " << Hari << " hari." << endl;
    }

template<class T>
int umur<T>::HitungHari(T bulan, T tahun) {
        if (bulan == 2) {
            if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
                return 29;
            } else {
                return 28;
            }
        } else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
            return 30;
        } else {
            return 31;
        }
    }

template<class T>
bool umur<T>::HitungKabisat() {
        if (tahun % 4 == 0) {
            if (tahun % 100 == 0) {
                if (tahun % 400 == 0) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return true;
            }
        } else {
            return false;
        }
    }

int main() {
    int tanggal, bulan, tahun;
    cout << "Masukkan tanggal, bulan, dan tahun lahir Anda : ";
    cin >> tanggal >> bulan >> tahun;

    umur<int> input(tanggal, bulan, tahun);
    input.HitungUmur();

    if (input.HitungKabisat()) {
        cout << tahun << " adalah tahun kabisat." << endl;
    } else {
        cout << tahun << " bukan tahun kabisat." << endl;
    }

    return 0;
}