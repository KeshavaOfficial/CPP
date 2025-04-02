#include <iostream>
using namespace std ;
int decimal(int n){
    int res = 0;
    int pow = 1;
    while(n>0){
        int lastdigit = n%10;
        res = res + lastdigit*pow;
        pow = pow*2;
        n=n/10;
    }
    cout<< res;
}
int main (){
    decimal(1111);
    return 0 ;
}