#include <iostream>
using namespace std ;
int linearSearch(int arr[] , int n, int key){
    for(int i =0; i< n; i++){
        if(key == arr[i]){
            cout << i ;
        }
    }
    return -1 ;
}

int reverse(int arr[], int n){
    int copyarr[n];
    cout << "Original ARRAY : ";
    for(int i=0; i<n ; i++){
        cout<< arr[i]<< " ,";
    }cout<< "\n";

    //copy array

    for(int i = 0; i<n; i++){
        int j = n-i-1;
        copyarr[i] = arr[j];
    }
    cout<< "\n";


    cout << "Reversed ARRAY :";
    for(int i =0; i<n ; i++){
        cout<< " ,";
        arr[i] = copyarr[i];
        cout<< arr[i] ;
    }
}


int twopointer(int arr[], int n){
    for(int i = 0 ; i<n; i++){
        cout<< arr[i]<< ",";
    }

    int start = 0;
    int end = n-1 ;
    while(start < end){
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp ;
        swap(arr[start], arr[end]);
        start ++;
        end -- ;

    }
    cout <<"\n";
    cout<<"Reversed ARRAY :" ;
    for(int i = 0; i<n ; i++){
        cout<< arr[i]<<", ";
    }

}

int binarySearch(int arr[], int n, int key){
    for(int i = 0; i<n; i++){
        cout<< arr[i]<<",";
    }cout<<"\n";


    int start = 0;
    int end = n-1 ;
    while(start <= end ){
        int mid = (start+end)/2;
        if(arr[mid] == key ){
            return mid ;
        }
        else if (key > arr[mid]){
            start = mid +1 ; 
        }
        else{
            end = mid - 1;
        }
    


    }
    return -1;

}


int main (){
    int arr[6] = {2,4,5,8,12,34};
    int n = sizeof(arr)/sizeof(int);
    // linearSearch(arr, n, 8);
    // reverse(arr, n);
    // twopointer(arr, n);
    // int result = binarySearch(arr,n, 8);
    // cout << "The Result is : "<< result ;
    return 0 ;
}