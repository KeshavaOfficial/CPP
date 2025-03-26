#include<iostream>
using namespace std ;
int main(){
    int Num, d1,d2,d3,sum;
    cout <<"Enter the 3 digit Number "<< endl;
    cin>> Num ;
    if (Num>= 100 && Num <= 999) {
        d1 = Num / 100 ;
        d2 = (Num/10)%10 ;
        d3 = (Num) % 10 ;
        
        sum = d1*d1*d1 + d2*d2*d2 + d3*d3*d3 ;

        if(sum == Num ){
            cout << "The number is Armstrong Number " << endl ;
        }else{
            cout << "The number is not a Armstrong Number "<< endl ;
        }
    }else{
        cout << "Invalid Number" << endl ;
    }
    return 0 ;
}