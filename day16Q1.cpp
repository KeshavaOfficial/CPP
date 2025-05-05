#include <iostream>
using namespace std ;
int sort(int arr[], int n){
    
    for(int i =0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i =0; i<n ; i++){
        cout << arr[i] << ", " ;
    }
}
int main (){
    int arr [5] = {12,5,67,32,54};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, n);
    return 0;
}