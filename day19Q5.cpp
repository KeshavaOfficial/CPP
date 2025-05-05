// Printout the sum of the numbers in the second row of the“nums”array.


#include <iostream>
using namespace std ;
void sumofarr(int mat[][3], int n, int m){
    int sum = 0;
    int i = 1 ;
    for(int j =0; j<m; j++){
        sum += mat[i][j] ;
    }
    cout << sum ;
}
int main (){
    int mat[3][3]={{1,4,9},{11,4,3},{2,2,3}};
    sumofarr( mat, 3,3);
    return 0;
}