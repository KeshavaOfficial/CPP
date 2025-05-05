#include <iostream>
using namespace std ;
// int reverse(int arr[], int n){
//     int copyarr[n] ;
//     for(int i=0; i<n; i++){
//         cout<< arr[i]<< ", ";
//         int j = n-i-1;
//         copyarr[i] =  arr[j] ;

//     }cout<<"\n";
//     for(int i=0; i<n; i++){
//         arr[i] = copyarr[i];
//         cout<< arr[i]<< ", ";
//     }
// }

// int subarr(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             for(int m = i; m<=j; m++ ){
//                 cout<<arr[m];
//             }cout<< ", ";
//         }cout<< "\n";
//     }
// }


// int maxsubarr(int arr[], int n){
//     int maxsum = 0;
//     for(int start=0; start<n; start++){
//         for(int end=start; end<n; end++){
//             int currsum = 0;
//             for(int i = start; i<=end; i++ ){
//                 currsum += arr[i]; 
//             }
//             cout<< currsum << ", ";
//             maxsum = max(currsum, maxsum);

//         }cout<< "\n";
//     }cout<< "MAX : "<< "("<< maxsum<<")";
// }

// int linearsearch(int arr[], int n, int key){
//     for(int i=0; i<n; i++){
//         if(arr[i]== key){
//             cout <<  i <<", ";
//         }
//     }return -1; 
// }

// int reverseswap(int arr[], int n){
//     int start = 0;
//     int end = n-1 ;

//     while(start< end){
//         int temp = arr[start];
//         arr[start]= arr[end];
//         arr[end] = temp ;
//         // swap(arr[start], arr[end]);
//         start ++;
//         end -- ;
//     }
//     for(int i =0; i<n; i++){
//         cout << arr[i];
//     }
    
// }

// int binarysearch(int arr[], int n, int key){
//     int start = INT_MIN;
//     int end = n-1;

//     while(start <= end){
//         int mid = (start+end)/2 ;
//         if(arr[mid] == key){
//             return mid ;
//         }
//         else if(arr[mid]> key){
//             end = mid-1;
//         }
//         else{
//             start = mid+1 ;
//         }
//     }return -1 ;
// }   

int StockPrices(int Prices[], int n){
    int bestbuy = INT16_MAX;
    
    int maxprofit = 0;
    
    for (int i =0; i<n ; i++){
        bestbuy = min(bestbuy, Prices[i]);
        int profit = Prices[i] - bestbuy;
        maxprofit = max(maxprofit, profit);
    }
    cout <<"MAX PROFIT :    " << maxprofit << "\n";


}

int main(){
    int Prices[5] = {5,6,12,8,4};
    int n = sizeof(Prices)/sizeof(int);
    // reverse(arr, n);
    // subarr(arr, n);
    // maxsubarr(arr, n);
    // linearsearch(arr, n, 6);
    // reverseswap(arr, n);
    // int result = binarysearch(arr,n, 2);
    // cout<< result  ;
    StockPrices(Prices,n);
    

    return 0;
}

