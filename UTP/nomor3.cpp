#include <iostream>
#include <cmath>
using namespace std;

template<class Tm>

class Trapezoid{
    private :
        Tm base1, base2, height;

    public :
        Trapezoid(){
             base1 = 3;
             base2 = 7;
             height = 4;
        }
        Trapezoid(Tm base1, Tm base2, Tm height){

        }
        Tm setAlasAtas(Tm base1){
            this->base1=base1;
        }
        Tm setAlasBawah(Tm base2){
            this->base2=base2;
        }
        Tm setTinggi(Tm height){
            this->height=height;
        }
        Tm getAlasAtas(){
            return base1;
        }
        Tm getAlasBawah(){
            return base2;
        }
        Tm getTinggi(){
            return height;
        }

        Tm CalculateArea(){
            Tm luas;
            luas = (base1 + base2) * height * 0.5;
            return luas;
        }

        Tm CalculatePerimeter(){
            Tm sisi = (base2-base1)/2;
            Tm sisiMiring = sqrt(pow(sisi, 2)+pow(height, 2));
            Tm keliling = base1 + base2 + sisiMiring*2;
            return keliling;
        }


};

int main(){
    Trapezoid <double> tp; 
    
    cout<<tp.CalculateArea()<<endl<<tp.CalculatePerimeter();
    
    return 0;
}

