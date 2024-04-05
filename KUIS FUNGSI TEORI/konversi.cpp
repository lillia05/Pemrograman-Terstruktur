#include <iostream>
using namespace std;

void konversi(double &x, char from, char to){
    if(from=='celcius'){
        if(to=='fahrenheit') x = (x*9/5)+32;
        else if(to == 'kelvin') x = x + 273.15;
        else if(to == 'reaumur') x = x*0.8;
    }else if(from=='fahrenheit'){
        if(to=='celcius') x = (x-32)*5/9;
        else if(to == 'kelvin') x = (x + 459.67)*5/9;
        else if(to == 'reaumur') x = (x-32)*4/9;
    }else if(from=='kelvin'){
        if(to=='celcius') x = x - 273.15;
        else if(to == 'fahrenheit') x = (x*5/9) - 459.67;
        else if(to == 'reaumur') x = (x - 273.152)*4/5;
    }else if(from=='reaumur'){
        if(to=='celcius') x = x / 0.8;
        else if(to == 'fahrenheit') x = (x*2.25) + 32;
        else if(to == 'kelvin') x = (x / 0.8) + 273.15;
    }
}

int main(){
    double x=10;
    konversi(x,'kelvin','reaumur');
    cout << "hasil konversi " << x;

    return 0;
}