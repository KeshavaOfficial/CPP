#include <iostream>
using namespace std;
int main(){
    int i, n ,sum ;
    cout << " Enter the number "<< endl ;
    cin >> n ;
    sum = 0;
    i =1 ;
    while(i<=n){
        sum = sum + i ;
        
        i ++ ;
        
    }
    cout << "The sum of N natural Numbers is : "<< sum << endl;
    
    return 0;

}