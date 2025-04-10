#include <iostream>
using namespace std;
void maxarray(int prices[],int n){
    int bestbuy [100000];
    bestbuy[0] = INT16_MAX;
    for(int i =1; i<n; i++){
        bestbuy[i]= min(bestbuy[i-1], prices[i-1]);
        cout<< bestbuy[i]<< ", ";
        
    }
    
    cout<< "\n";

    int maxprofit  = 0 ;
    for(int i =0; i<n ; i++){
        int profit = prices[i] - bestbuy[i];
        maxprofit = max(profit, maxprofit);
    }cout<< "Maximum Profit : "<< maxprofit ;
}
int main(){
    int prices [6] = {9,4,7,12,57,7};
    int n = sizeof(prices)/sizeof(int);
    maxarray(prices,n);
    return 0;
}