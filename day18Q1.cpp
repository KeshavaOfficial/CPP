#include<iostream>
using namespace std;
void bubble(int arr[], int n){
    for(int i =0; i<n-1; i++){
        int minIdx = i;
        for(int j =i+1; j<n; j++ ){
            if(arr[j]< arr[minIdx]){
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    for(int i =0; i<n; i++){
        cout<< arr[i]<< " ";
    }

}
int selection(int arr[], int n ){
    
}
int main (){
    int arr []= {5,4,1,2,8,2,78,4,8,9};
    int n = sizeof(arr)/sizeof(int);

    bubble(arr,n);
    selection(arr,n);
    return 0;
}