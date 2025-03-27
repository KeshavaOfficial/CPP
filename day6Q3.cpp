#include <iostream>
using namespace std;
int main (){
    int m,n,revdigit, digit;
    cout<< "Enter the Number  : "<< endl;
    cin >> n ;
    m=n;
    revdigit = 0 ;

    while( n>0){  
        digit = n%10;
        revdigit = ((revdigit*10) + digit);
        n = n/10;

    }
    if(revdigit==m){
        cout<< "The Number is Palindrome  "<<endl;
    }else{
        cout<< "The Number is not a Palindrome "<< endl;
    }
    return 0 ;

}
