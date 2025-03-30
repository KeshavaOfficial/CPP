#include<iostream>
using namespace std;
int main(){
    int i,j,n,k,l;
    cout<< "Enter the number : ";
    cin>> n;

    for(i=1;i<=n;i++){
        for(j=1; j<=i; j++){
            cout<< "*";
        }
        for(k=1; k<= 2*(n-i); k++){
            cout<<" ";
        }
        for(l=1; l<=i; l++){
            cout<< "*";
        }
        cout<< endl;
    }

    //downside
    for(i=n;i>=1;i--){
        for(j=1; j<=i; j++){
            cout<< "*";
        }
        for(k=1; k<= 2*(n-i); k++){
            cout<<" ";
        }
        for(l=1; l<=i; l++){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0 ;
}
