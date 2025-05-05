#include <iostream>
using namespace std ;
void numberofkeys (int mat [][3], int n, int m, int key){
    int count =0;
    for(int i = 0; i<n ; i++){
        for(int j =0; j<m; j++){
            if(mat[i][j] == key){
                count ++ ;
            }
        }
    }
    cout<< count ;


}

// void numberofkeys2 (int mat [][3], int n, int m, int key){
//     int count =0;
//     for (int i=0; i<n ; i++){

//     } 
// }




int main (){
    int mat[2][3] = {{4,7,8},{7,8,8}};
    numberofkeys(mat,2,3,7) ;
    // numberofkeys2(mat,2,3,7) ;
    return 0;
}