#include <iostream>
using namespace std;
void sumofdigit(int n){
    int res = 1;
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        res = res*10 + lastdigit;
        n = n/10;
        sum = sum + lastdigit ;
    }
    cout<< sum;

}
int main(){
    sumofdigit(126541);
    return 0 ;
}