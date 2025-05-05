#include <iostream>
using namespace std;

int check(int arr[], int n){
    // int dum[n];
    for(int i =0; i<n; i++){
    //     dum[i] = arr[i];
    // }
    // for(int i = 0; i<n; i++){

    // }    

        for(int j=i+1; j<n; j++ ){
            if(arr[i]== arr[j]){
                return true ;
            }
        }
    }
    return false ;
}


int main(){
    int arr [6] = {2,0,5,12,8,2};
    int n = sizeof(arr)/sizeof(int);
    int result = check(arr, n);
    cout<< result ;
    return 0;
}