#include <iostream>
using namespace std;
int main (){
    int n,i,fact;
    cout<<"Enter the number : "<< endl;
    cin>>n;
    fact = 1;
    for(i=1; i<=n; i++){
        fact = fact*i;
    }cout<< "The factorial of the Number is : "<< fact<<endl;
    return 0 ;
}