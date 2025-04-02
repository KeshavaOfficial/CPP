#include <iostream>
#include <cmath>
using namespace std ;

int sub (int a,int b){
    return a-b;
}

int prod(int a,int b){
    int p = a*b;
    return p;
}
int bro(int a,int b){
    int d = a/b ;
    return d;
}
bool iseven(int n){
    if(n%2==0){
        return true;
    }else{
        return false ;
    }
}

bool isprime(int n){
    if(n == 1 ){
        return false ;
    }
    for(int i=2; i*i<=n; i++ ){
        if(n%i==0){
            return false;
        }
    }return true;
}

int factorial(int n){
    int fact = 1;
    for(int i =1; i<= n; i++){
        fact *= i;
        cout<< fact << endl;
    }return fact;
}
void allprimes(int n){
    for(int i = 1; i<=n; i++){
        bool isprime = true;
        for(int j =2; j <= sqrt(i); j++){
            if(i%j==0){
                isprime = false;
            }

        }
        if (isprime){
            cout<< i<< endl;
    }
    }
    
}

int main(){
    cout<< sub(10,6)<<endl;
    cout<< prod(2,4)<< endl;
    cout<< bro(10,2) << endl;
    cout<< iseven(5) << endl;
    cout<< isprime(5)<< endl;
    cout<< "_____________FACTORIAL___________"<<endl;
    cout<< factorial(10)<< endl;
    cout<< "____________ALL PRIMES____________"<<endl;
    allprimes(100);
    
    return 0 ;
}