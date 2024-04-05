bool isKataPalindrome(string &str){
    int panjang = str.length();

    for(char a : str){
        if(a >= '0' && a <= '9'){
            return false;
        }
    }
    int k1 = 0;
    int k2 = panjang - 1;

    while(k1<k2){
        if(tolower(str[k1]) != tolower(str[k2])){
            return false;
        }
        k1++;
        k2--;
    }
    return true;
}