#include <iostream>
using namespace std;


void decimaltobinary(int n){
    int res = 0;
    int pow = 1;
    while(n>0){
        int lastdigi = n%2;
        res = res + lastdigi*pow;
        pow = pow*10;
        n= n/2;

    
    }cout << "The binary of the Number is  = "<< res << endl;
    
}


void binarytodeci(int n){
    int res = 0;
    int pow = 1;
    while(n>0){
        int lastdigi= n%10;
        res = res + lastdigi*pow;
        pow = pow*2;
        n = n/10 ;
    }cout << "The Decimal of the Number is  = "<< res << endl;
}

void zero(int n ){
    int i, j ;
    for(i = 1; i<=n; i++){
        for(j = 1; j<= i ; j++){
            if(i%j == 1){
                cout<< "1";
            }else{
                cout<< "0";
            }
        }cout<< endl;
    }
}

void rhombus(int n){
    int i,j, k;
    for (i=1; i<=n; i++){
        for (j=1; j <= (n-i); j++){
            cout<< " ";
        }
        for (k =1; k<= n ; k++){
            cout<< "*" ;
        }cout<< endl;
    }
}
int main (){
    //decimaltobinary( 885 );
    //binarytodeci(11011);
    //zero(4);
    //rhombus(4);
    
    return 0;
}