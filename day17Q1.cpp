#include <iostream>
using namespace std ;

int Bubblesort(int arr[], int n){
    for(int i=0; i<n; i++){
        for( int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for (int i=0; i<n; i++){
        cout << arr[i] <<", ";
    }
}

void SelectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        int MinIDX = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[MinIDX] ){
                MinIDX = j;
            }
        }
        swap(arr[i], arr[MinIDX]);
    }
    for(int i=0; i<n; i++){
        cout << arr[i]<< ", ";
    }
}

int main (){
    int arr [10] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr)/sizeof(int);
    SelectionSort(arr, n);
    return 0;

}