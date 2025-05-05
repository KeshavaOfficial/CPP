#include<iostream>
using namespace std ;
int maxprod(int arr[], int n){
    int ProdMax = arr[0] * arr[1];
    for(int i = 1; i<n-1; i++){
        cout<< arr[i]<<", ";
        int prod = arr[i]*arr[i+1];
        ProdMax = max(prod, ProdMax);
    }cout<< "\n" ;
    cout<< ProdMax ;
    
}
int main(){
    int arr [8] = {3,5,-6,7,-2,1,2,4};
    int n = sizeof(arr)/sizeof(int);
    maxprod(arr,n);
    return 0;
}