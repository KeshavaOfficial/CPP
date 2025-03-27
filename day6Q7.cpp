#include <iostream>
using namespace std;
int main(){
    int sum,digit,i,n,m;
    cout<<"Enter the Number : ";
    cin >> n ;
    m=n;
    sum = 0 ;
    while(n>0){
        digit = n%10;
        sum = sum+(digit*digit*digit);
        n = n/10;
    }

    if (sum == m){
        cout<< "it is a ARMSTRONG number "<<endl;

    }else{
        cout<< "it is NOT a ARMSTRONG number "<<endl;
    }
    return 0 ;
}