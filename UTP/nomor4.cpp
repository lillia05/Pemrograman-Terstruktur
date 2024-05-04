#include <iostream>
#include <cmath>
using namespace std;

template<class Tm>

class Kite{
    private :
        Tm diagonal1, diagonal2;

    public :
        Kite(){
             diagonal1 = 10;
             diagonal2 = 10;
        }
        Kite(Tm diagonal1, Tm diagonal2){
            this->diagonal1 = diagonal1;
            this->diagonal2 = diagonal2;
        } 
        Tm setdig1(Tm diagonal1){
            this->diagonal1=diagonal1;
        }
        Tm setdig2(Tm diagonal2){
            this->diagonal2=diagonal2;
        }

        Tm getdig1(){
            return diagonal1;
        }
        Tm getdig2(){
            return diagonal2;
        }
        
        Tm CalculateArea(){
            Tm luas;
            luas = (diagonal1*diagonal2)/2;
            return luas;
        }

        Tm CalculatePerimeter(){
            Tm horizontal = diagonal2/2;
            Tm vertikal = diagonal1-horizontal;
            Tm sisiMiring1 = sqrt(pow(horizontal, 2)+pow(horizontal, 2));
            Tm sisiMiring2 = sqrt(pow(horizontal, 2)+pow(vertikal, 2));
            Tm keliling = (sisiMiring1 * 2) + (sisiMiring2 * 2);
            return keliling;
        }


};

int main(){
    Kite <double> kt; 
    
    cout<<kt.CalculateArea()<<endl<<kt.CalculatePerimeter();
    
    return 0;
}

