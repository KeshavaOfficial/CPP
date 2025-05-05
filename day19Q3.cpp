#include <iostream>
using namespace std ;
bool search(int mat[][4], int n, int m, int key){
    for(int i =0 ; i<n ; i++){
        for(int j = 0; j<n ; j++){
            if(mat[i][j] == key ){
                cout << "Key found at position: (" << i << ", " << j << ")" << endl;
                return true;
                
            }
        }
    }
    return false ;
}


bool search2 (int mat[][4], int n, int m, int key){
    int i=0, j = m-1;
    while(i<n && j>=0){
        if(mat[i][j] == key){
            cout << "Key found at position: (" << i << ", " << j << ")" << endl;
            return true ;
        }

        else if (mat[i][j] > key){
            j -- ;
        }
        else if (mat[i][j] < key){
            i ++ ;
        }
    }
    return false;
}
int main (){
    int mat [4][4] ={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
    search(mat, 4, 4, 11) ;
    // search2(mat, 4, 4, 11) ;
    return 0;
}