#include <iostream>
#include <algorithm>
using namespace std ;

void selection(int arr[], int n){
    for(int i =0; i<n; i++){
        int minIDX = i;
        for(int j =i+1; j<n; j++ ){
            if(arr[j] <  arr[minIDX])
            minIDX  =j ;
        }
        swap(arr[i], arr[minIDX]) ;
    }
    for(int i =0; i<n; i++){
        cout << arr[i] <<", ";
    }
}

void directsort(int arr[], int n){
    sort(arr,arr+n, greater<int>());
    for (int i =0; i<n; i++){
        cout << arr[i]<<", ";
    }
}

int main (){
    int arr[6] = {34,232,57,523,67,3};
    int n = sizeof(arr)/sizeof(int);
    directsort(arr,n);
    return 0;
}