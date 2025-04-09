#include <iostream>
using namespace std ;
void subarray(int arr[], int n){
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            // cout<< "("<< start << ","<< end <<')';


            for (int i = start; i <= end; i++) {
                cout << arr[i] ;
            }cout << "," ;


        }cout<< "\n";

        

    }
}


int main(){
    int arr [6]={12,23,34,56,67,78};
    int n = 6 ;
    subarray(arr, n);
    
    return 0;
}
