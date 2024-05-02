#include <iostream>
#include <conio.h>

using namespace std;

class bangun
{
private:
    double x, y, z;
public:
    virtual void get_data() = 0;
    virtual void display_area() = 0;

    // Public methods to access private members
    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }
    void setX(double value) { x = value; }
    void setY(double value) { y = value; }
    void setZ(double value) { z = value; }
};

class persegi : public bangun
{
public:
    void get_data(void)
    {
        cout << "\n\nMenghitung Luas dan Kel Persegi\n\n";
        double sisi1, sisi2;
        cout << "Sisi 1 = "; cin >> sisi1;
        cout << "Sisi 2 = "; cin >> sisi2;
        setX(sisi1);
        setY(sisi2);
    }
    void display_area(void)
    {
        double luas = getX() * getY();
        cout << "Luas Persegi = " << luas << endl;
        double kel = 4 * getX();
        cout << "Keliling Persegi = " << kel;
    }
};
class persegi_panjang : public bangun
{
public:
    void get_data(void)
    {
        cout << "\n\nMenghitung Luas dan Kel Persegi Panjang\n\n";
        double x,y;
        cout << "Panjang = "; cin >> x;
        cout << "Lebar   = "; cin >> y;
        setX(x);
        setY(y);
    }
    void display_area(void)
    {
        double luas = getX() * getY();
        cout << "Luas Persegi Panjang = " << luas<<endl;
        double kel = 2*(getX()+getY());
        cout<<"Keliling Persegi Panjang = "<<kel;
    }
};
// Similarly, update other derived classes...

int main()
{
    system("cls");
    persegi segi;
    persegi_panjang segiPanjang;
    // Instantiate other derived classes...

    bangun* list[6];

    list[0] = &segi;
    list[1] = &segiPanjang;
    // Assign other derived class objects...

    int pilih;
    while (1)
    {
        system("cls");
        cout << "\nMenghitung Luas Bangun Datar\n";
        cout << "1) Luas Persegi\n";
        cout << "2) Luas Persegi Panjang\n";
        // Include options for other shapes...

        cout << "Masukkan Pilihan: ";
        cin >> pilih;

        if (pilih >= 1 && pilih <= 6)
        {
            list[pilih - 1]->get_data();
            list[pilih - 1]->display_area();
            _getch();
        }
        else
        {
            exit(1);
        }
    }
}
