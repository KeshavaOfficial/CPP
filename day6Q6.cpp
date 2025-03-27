#include <iostream>
using namespace std;
int main(){
    int i,n, mul;
    cout<<"Enter the number for which you want Multiplication Table"<<endl;
    cin>>n;
    for(i=1; i<=10; i++){
        mul = n*i;
        cout<< n<< "X"<< i<< "="<< mul<<endl;
    }
    return 0 ;
}