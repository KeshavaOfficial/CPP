#include <iostream>
using namespace std ;

void reverseArray(int arr[], int n ){
    cout << "Original Number  : ";
    for(int i =0; i<n ; i++){
        cout << arr[i]<< ',' ;
    }cout << "\n" ;



    int copyarr[ n ] ; 
    for (int i=0; i<n ; i++){
        int j = n-i-1;
        copyarr[i] = arr[j] ;
    }cout << "\n";
    
    
    
    cout << "Reverse Array  : ";
    for(int i = 0 ; i<n ; i++){
        arr[i] = copyarr[i];
        cout << arr[i]<< ",";
    }cout << "\n" ;
}

int main (){
    int arr[6] = {2,54,7,88,234,45};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr, n) ;
    return 0;
}
