#include <iostream>
using namespace std ;
//binary Search 
int binaryarr(int arr[], int n, int key){
    int start = 0;
    int end = n-1 ;
    while(start <= end){
        int mid = (start+end)/2;
        if (arr[mid]== key){
            return mid;
        }
        else if(arr[mid]> key){
            end = mid -1 ;
            
        }
        else{
            start = mid +1 ;
            
        }
    }
    return -1 ;
    
    
    
    
}
int main(){
    int arr[6] = {4,7,9,12,45,67};
    int n = sizeof(arr)/sizeof(int);
    int result = binaryarr(arr,n,90);
    cout << " The Elemnet the Key is : " << result << "\n"; 
    return 0 ;
}