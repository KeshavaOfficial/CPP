#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter the number of rows ";
    cin>> n ;
    for(i=1; i<=n; i++){
        cout<< "* ";
        for(j=1; j<=n-1; j++){
            if(i==1 || i == n){
                cout<<"* ";

            }else{
                cout<< "  ";
            }        
        }
        cout<< "* ";
        cout<< endl;
    }
    return 0 ;

}