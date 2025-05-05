// #include <iostream>
// using namespace std ;
// void transposemat(int mat [][3],int n, int m){
//     int transpose[3][2] = {0} ;
//     for (int i  = 0; i<n ; i++){
//         for(int j =0; j<m ; j++){
//             transpose[j][i] = mat[i][j] ;
//         }
//     }
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n ; j++){
//             cout << transpose[i][j] <<" " ;
//         }
//         cout << "\n" ;
        
//     }
// }
// int main (){
//     int mat [2][3] = {{4,7,8},{8,8,7}};
//     transposemat(mat, 2,3);
//     return 0;
// }


#include <iostream>
using namespace std ;

void convert(int arr[], int n){
    int mat [2][2] = {0};

}

int main (){

    int arr [] = {4,7,8,9};
    int n = sizeof(arr)/sizeof(int) ;
    cout << n ;
    convert(arr, n);
    return 0;
}