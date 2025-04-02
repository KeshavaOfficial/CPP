#include<iostream>
using namespace std ;
void palendrome(int n){
    
    int original = n;
    
    int res = 0;
    while(n>0){
        int lastdigit = n%10;
        res= res*10 + lastdigit;
        n = n/10;
    }
    if (res==original){
        cout<< "it is palindrome";

    }else{
        cout<< "Not a Palindrome ";
    }
}
int main (){
    palendrome(17561);
    return 0;
}