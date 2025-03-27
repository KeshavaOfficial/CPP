#include <iostream>
using namespace std;
int main (){
    int n, i, sum;
    cout<< "Enter the Number :  "<< endl ;
    cin >> n ;
    sum = 0 ;
    for (i = 1; i<= n; i++){
        sum = sum + i ;
        cout<< sum << endl;

    }
    cout<< " The Sum of N natural Numbers is :  "<< sum ;
    return 0;
}
