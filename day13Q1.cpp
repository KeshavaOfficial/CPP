#include <iostream>
using namespace std ;
int main (){
    int m ;
    cout<< "Enter the Values u want to enter in the Array";
    cin>> m;
    
    int arr[m];
    int n = sizeof(arr) /sizeof(int) ;
    cout << n ;
    // cout<< arr << '\n';
    // cout<< sizeof(arr)<< '\n';
    // cout<< sizeof(int )<< '\n';
    cout<< "Enetr the number "<< '\n';
    

    for (int i=0; i<n; i++){
        cin >>arr[i];
    }
    int max = arr[0] ;
    int min = arr[0];
    for(int i = 0; i<n; i++){
        cout << arr[i] << ' ';
        
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
            


    }cout<< '\n';
    cout<< "Max "<< max << '\n' ;  
    cout<< "Min "<< min << '\n' ;  

    cout << *arr<< '\n' ;
    cout << arr[0] << '\n';
    cout << arr[2] ;
    return 0;
}
