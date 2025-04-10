#include <iostream>
using namespace std;
int array2(int heights[], int n){
    int leftmax[20000];
    leftmax[0] = heights[0] ;
    cout<< "Left Max : " ;
    for(int i = 1 ; i<n ; i++){
        leftmax[i] = max(heights[i], leftmax[i-1] );
        cout <<  leftmax[i]<< ", ";
    }

    cout<< "\n" ;
    int rightmax[20000];
    rightmax[n-1] = heights[n-1];
    cout<< "Right Max : " ;
    for(int i = n-2; i>=0; i--){
        rightmax[i] = max(heights[i], rightmax[i+1]);
        cout <<  rightmax[i] << ", ";
    }cout <<"\n";

    int watertrapped = 0 ;
    for(int i=0 ; i<n; i++){
        int currwater = min(rightmax[i], leftmax[i])- heights[i];
        
        if(currwater > 0 ){
            watertrapped += currwater ;
        }
        
    }
    cout << "Heights  :  " ;
    for(int i = 0; i<n; i++){
        cout << heights[i]<<", ";
    }
    cout<< "\n";
    cout <<"Water Trapped : "<<  watertrapped ;

    return watertrapped;
    

}
int main (){
    int heights[8] = {7,3,0,12,10,5,2,8};
    int n = sizeof(heights)/sizeof(int);
    array2(heights, n);
    return 0;
}






#include <iostream>
using namespace std ;

int WaterArray(int heights [], int n){
    int leftmax [20000];
    int rightmax [20000];
    leftmax[0] = heights[0];
    for(int i =1; i<n; i++){
        leftmax[i] = max(heights[i-1], leftmax[i-1]);
        cout<< leftmax[i]<<", ";
    }
    cout<< "\n";
    rightmax[n-1]=heights[n-1];
    for(int i = n-2; i>=0; i--){
        rightmax[i] = max(heights[i+1], rightmax[i+1]);
        cout<< rightmax[i]<< ", ";
    }

    int watertrapped = 0 ;
    for(int i=0 ; i<n; i++){
        int currwater = min(rightmax[i], leftmax[i])- heights[i];
        
        if(currwater > 0 ){
            watertrapped += currwater ;
        }
        
    }
    cout<< "\n";
    cout <<"Water Trapped : "<<  watertrapped ;

    return watertrapped;

}
int main(){
    int heights [6] = {12,3,15,8,6,7};
    int n = sizeof(heights)/sizeof(int);
    WaterArray(heights, n);
    return 0;
}