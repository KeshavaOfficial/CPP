#include <iostream>
using namespace std ;
int main (){
    int TotalAmount, PrincipleAmount, AnnualInterest, Time ;
    cout << "Enter the Principle Amount : " ;
    cin >> PrincipleAmount;
    cout << "Enter the Annual Interest Rate : " ;
    cin >> AnnualInterest;
    cout << "Enter the Time  :" ;
    cin >> Time ;

    TotalAmount = PrincipleAmount * (1+(AnnualInterest/100)^Time) ;

    cout << "The Total Amunt Paid is :  " << TotalAmount << endl ;
    return 0 ;
}