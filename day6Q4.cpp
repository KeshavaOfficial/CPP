#include <iostream>
#include <cmath>

using namespace std ;
int main(){
    int n, i;
    bool isprime =true;
    cout<< "Enter the Number to check it is Prime or Not "<< endl;
    cin>>n;
    if(n<2){
        isprime =false;
    }else{
        for(i=2; i<=sqrt(n); i++){
            if(n%i==0){
            isprime=false;
            break;
        }
        }
    }

if(isprime){
    cout<< "It is PRIME ";
}else{
    cout<< "It is NOT PRIME" ;
}
return 0;
}
