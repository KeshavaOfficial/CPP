#include <iostream>
using namespace std ;
int subarray(int arr[], int n){

    int maxsum = 0;
    for(int start =0; start<n; start++){
        for(int end =start; end<n; end++){
            int currsum = 0;
            for(int i =start ; i<=end; i++){
                currsum += arr[i];
            }
            cout<< currsum << ", ";
            maxsum = max(maxsum, currsum);
            
        }cout<< "\n";
    }
}

int main(){
    int arr [6] = {12,-1,23,-21, 45,-2};
    int n = sizeof(arr)/sizeof(int);
    subarray(arr,n);
    return 0;
}