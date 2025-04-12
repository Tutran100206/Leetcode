class Solution {
public:
    int romanToInt(string a) {
    int tam=0, kq=0, ktra=0;
    for (int i=0; i<a.size(); i++){
        if (a[i]=='I') tam=1;
        else if (a[i]=='V') tam=5;
        else if (a[i]=='X') tam=10;
        else if (a[i]=='L') tam=50;
        else if (a[i]=='C') tam=100;
        else if (a[i]=='D') tam=500;
        else if (a[i]=='M') tam=1000;
        kq += tam;
        if (ktra<tam){
            kq = kq - 2 * ktra;
        }
        ktra=tam;
    }
    return kq;
    }
};