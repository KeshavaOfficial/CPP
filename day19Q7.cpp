#include <iostream>
using namespace std ;
void shuffle(int mat, int n, int m){
    for(int i = n-1 ; i>= 0; i--){
        for (int j =i; j>=0; j--){
            cout << mat[i][j] ;
        }
    }
}

int main (){
    int mat [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    shuffle(mat, 2,3);
    return 0;
}