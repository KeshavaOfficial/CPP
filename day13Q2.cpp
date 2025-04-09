#include <iostream>
using namespace std ;
int search(int arr [5], int n, int key){
    for (int i =0; i <n ; i++){
        if (arr[i]== key){
            return i ;
        }

    }
    return  -1 ;

}
int main (){
    int arr [5] = {12,34,65,31,21} ;
    int n = sizeof(arr)/ sizeof(int );
    int result = search (arr, n ,656) ;

    cout << result << '\n';

    return 0;
}
