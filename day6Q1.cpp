#include <iostream >
using namespace std ;
int main (){
    int digit, sum, n;

    cout<< "Enter the Number "<<endl ;
    cin >> n ;

    sum = 0 ;
    while(n>0){
        digit = n%10 ;
        if(digit %2==1){
            sum = sum + digit;

        }n=n/10;

    }cout<< "The sum of Odd numbers is : "<< sum;
    return 0 ;
}