#include <iostream>
using namespace std;

template<class Tm>

class Trapezoid{
    private :
        Tm base1, base2, height;

    public :
        Trapezoid(){
             base1 = 10;
             base2 = 10;
             height = 10;
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


};

int main(){
    Trapezoid <int> tp; 
    
    cout<<tp.getAlasAtas()<<endl<<tp.getAlasBawah()<<endl<<tp.getTinggi();
    
    return 0;
}

