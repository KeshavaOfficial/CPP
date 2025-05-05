// #include <iostream>
// using namespace std ;
// void Stock(int Prices[], int n){
//     int maxprofit = 0; 
//     int bestbuy [n] ;
//     bestbuy[0] = Prices[0] ;
//     for(int i = 1; i<n ; i++){
//         bestbuy[i]= min(Prices[i], bestbuy[i-1]);
//     }
//     int MaxProfit = 0;
//     for(int i =0; i<n ; i++){
//         MaxProfit = max((Prices[i] - bestbuy[i]), MaxProfit);
//     }

//     for(int i=0 ; i<n ; i++){
//         cout << bestbuy[i]<< " " ;
//     }
//     cout << "\n" ;
//     cout << "MAXIMUM PROFIT : "<< MaxProfit ;
// }
// int main(){
//     int Prices[] = {23,12,3,56,90,20};
//     int n = sizeof(Prices)/sizeof(int) ;
//     // selectionsort(arr,n);
//     Stock(Prices,n);
//     return 0;
// }

// #include <iostream>
// using namespace std ;
// void waterTrap(int arr[], int n) {
//     int rightmax [n] ;
//     rightmax[0] = arr[0];
//     int leftmax[n] ;
//     leftmax[n-1] = arr[n-1];
//     for(int i =1; i<n ; i++){
//         rightmax[i] = max(arr[i], rightmax[i-1]);
//     }
//     for(int i =n; i>=0 ; i--){
//         leftmax[i] = max(arr[i], leftmax[i+1]);
//     }
//     for(int i =0; i<n; i++){
//         cout << rightmax[i] << " ";
//     }
//     cout << "\n" ;
//     for(int i =0; i<n; i++){
//         cout << leftmax[i] << " ";
//     }
//     int waterTrapped = 0;
//     int TotalWaterTrapped = 0 ;
//     for(int i=0; i <n ; i++){
//         waterTrapped = (min(leftmax[i], rightmax[i])) - arr[i] ;
//         TotalWaterTrapped += waterTrapped ;
//     }
//     cout << "\n" ;
//     cout << "Toatal Water Trapped in the Valley is : " << TotalWaterTrapped ;
// }
// int main (){
//     int arr[] = {23,12,3,56,90,20};
//     int n = sizeof(arr)/sizeof(int) ;
//     waterTrap(arr,n) ;
    
//     return 0;
// }


























// #include <iostream>
// usingnamespace std ;
// int main (){
//     return 0;
// }


#include <iostream>
using namespace std ;
void spiralmat(int mat[][4], int n, int m ){
    int srow = 0 , scol = 0;
    int erow = n-1, ecol = m-1 ;

    while(scol<=ecol && srow<=erow){
        for(int j = scol; j<= ecol; j++){
            cout << mat[srow][j] << " ";
        }
        cout << "\n" ;
    
        // right 
        for(int i = srow+1; i<= erow; i++ ){
            cout << mat [i][ecol] << " ";
        }
        cout << "\n" ;
    
        // bottom 
        if(srow<erow){
            for(int j= ecol -1; j>=scol; j--){
            cout << mat[erow][j] << " ";
    
            }
        }
        cout << "\n" ;
        
        
        //left 
        if(srow< erow){
            for(int i = erow-1 ; i>=srow+1; i--){
                cout << mat[i][scol] << " ";
            }
        }
        cout << "\n" ;
        srow ++ ;
        scol ++ ;
        erow -- ;
        ecol -- ;
    
    }

}
    
int main  () {
    int mat[6][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20},{21,22,23,24}};
    spiralmat(mat, 6,4);
    return 0;
}
