#include <iostream>
using namespace std;
//decimal to binary conversion
int binary(int n){
    int pow = 1;
    int binum = 0;
    
    while(n>0){
    int lastdigit = n%2;
    binum = binum + (lastdigit*pow);
    pow = pow*10 ;
    n = n/2;
    }
    cout<< binum<<endl;

}
int main(){
    binary(8);

    return 0;
}