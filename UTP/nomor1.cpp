#include <iostream>
using namespace std;

template<class Tm>

class Trapezoid{
    public :
        Tm base1, base2, height;

};

int main(){
    Trapezoid <int> tp; 
    int a = tp.base1 = 10;
    int b = tp.base2 = 10;
    int c = tp.height = 10;
    
    cout<<a<<endl<<b<<endl<<c;
    
    return 0;
}

