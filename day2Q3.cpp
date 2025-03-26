#include<iostream>
using namespace std;
int main (){
    float Principle, Rate, Time, Intrest;
    cout<< "Enter the Principle Amount  : ";
    cin>> Principle;
    cout<< "Enter the Rate  : ";
    cin>> Rate;
    cout<< "Enter the Time : ";
    cin>> Time;

    Intrest = (Principle + Rate + Time)/100 ; 
    cout<< "The interst Amount is : "<< Intrest ;
    return 0 ;
    
     
}