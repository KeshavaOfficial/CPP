#include <iostream>
using namespace std;
int kadenes(int arr[], int n){
    int maxsum = 0;
    int currsumm = 0;
    for(int i =0; i<n; i++){
        currsumm = max(arr[i], currsumm + arr[i]);
        maxsum = max(currsumm, maxsum);

    }cout<< "\n" ;
    cout <<"MAX : " << "(" << maxsum << ")" ;
}

int main (){
    int arr[6]= {12,-1,34,-21,45,67};
    int n = sizeof(arr)/sizeof(int);
    kadenes(arr, n);
    return 0;
}