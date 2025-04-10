#include <iostream>
using namespace std ;
int subarray(int arr[], int n){

    int maxsum = 0;
    for(int start =0; start<n; start++){
        int currsum = 0;
        for(int end =start; end<n; end++){
            currsum = currsum + arr[end] ;
            maxsum = max(maxsum, currsum);
            
        }
    }cout<< "The maximum is  : "<< maxsum ;
    
}

int main(){
    int arr [6] = {12,-1,23,-21, 45,-2};
    int n = sizeof(arr)/sizeof(int);
    subarray(arr,n);
    return 0;
}