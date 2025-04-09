#include <iostream>
using namespace std ;
void swarrevearr(int arr[], int n){
    cout << "Original Array : " ;
    for(int i=0; i<n ; i++){
        cout << arr[i]<< ",";
    }
    cout<< "\n";
    int start = 0;
    int end = n-1;

    while(start < end){
        swap(arr[start], arr[end]);
    //     int temp = arr[start];
    //     arr[start] = arr[end];


    //     arr[end] = temp;

    
        start ++;
        end --;
        
    }


    cout << "Revered Array : " ;
    for(int i=0; i<n ; i++){
        cout << arr[i]<< ",";
    }


}

int main (){
    int arr[6] = {23,346,76834,589,43,6} ;
    int n = sizeof(arr)/sizeof(int);
    swarrevearr(arr, n);

    return 0;
}