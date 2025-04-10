#include <iostream>
using namespace std ;
void subarray(int arr[], int n){

    int maxsum = INT16_MIN ;
    int currsum = 0 ;
    for(int i =0; i<n; i++){
        currsum += arr[i] ;
        maxsum = max(currsum, maxsum );
    }
    cout<< "The maximum is  : "<< maxsum ;
    
}

int main(){
    int arr [6] = {12,-1,23,-21, 45,-2};
    int n = sizeof(arr)/sizeof(int);
    subarray(arr,n);
    return 0;
}