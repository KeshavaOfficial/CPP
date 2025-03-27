#include <iostream>
#include <list>
using namespace std ;
int main (){
    int n ,i, lastdigit, sum;
    cout << "Enetr the number : " ;
    cin >> n;
    lastdigit = 0;
    sum = 0 ;
    while (n>0 ){
        lastdigit = n%10;
        sum +=lastdigit;
        n/=10;
    }cout<<sum;
    return 0 ;
}