#include <iostream>
#include <string>
using namespace std;

string kalimatMundur(string &arr){
    string hasil = "";
    string kata = "";
    int length = 0;
    
    while(arr[length] != '\0'){
        length++;
    }
    for(int i = 0; i <= length; i++){
        if(arr[i] == ' ' || arr[i] == '\0'){
            hasil = kata + " " + hasil;
            kata = "";
        }else{
            kata += arr[i];
        }
    }
    arr = hasil;
    return arr;
}

int main(){
    string a = "Aku suka kamu";
    string reversed = kalimatMundur(a);
    cout << reversed<<endl;

    return 0;
}