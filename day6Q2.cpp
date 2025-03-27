#include <iostream>
using namespace std ;
int main (){
    int sum,n, digit ;
    cout<< "Enter the number : "<< endl ;
    cin >> n;
    
    sum = 0;
    while (n>0){
        digit = n%10;
        sum = (sum*10)+digit;
        n = n/10;
        
    }cout<< "The reverse of the Digit is : "<< sum<< endl ;

    return 0;
}