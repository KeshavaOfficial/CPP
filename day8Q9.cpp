#include<iostream>
using namespace std;
int main(){
    int i,j,n, k;
    cout<< "Enter the number : ";
    cin>> n;
    for(i=1;i<=n;i++){
        for(j= 1; j<=(n-i); j++){
            cout<<" ";
            }
            for(k=1; k<= (2*i)-1; k++){
                cout<< "*";
        }cout<<endl;
    }
    for(i=n;i>=1;i--){
        for(j= 1; j<=(n-i); j++){
            cout<<" ";
            }
            for(k=1; k<= (2*i)-1; k++){
                cout<< "*";
        }cout<<endl;
    }
// //leftside
//     for (i=1; i<=n; i++){
//         for(j=1; j<=(n-i); j++){
//             cout<<" ";

//         }
//         for(k=1; k<=i; k++){
//             cout<<"*";
//         }cout<< endl;
// //UP-Right side
//     for (i=1; i<=n; i++){
//         for(j=1; j<=i; j++){
//             cout<<"*";
    
//         }cout<< endl;
//     }
//     }

    // //right part

    // for(int l =n; l>=1; l--){
    //     for(int p=1; p<=(n-l); p++){
    //         cout<< " ";
    //         }
    //         for(j= 1; j<=l; j++){
    //             cout<<"*";
    //     }
    //     cout<< endl;
    // }


    // //reverse of this 

    // //Down Right part

    // for(int l =n; l>=1; l--){
    //         for(j= 1; j<=l; j++){
    //             cout<<"*";
    //     }
    //     cout<< endl;
    // }



    return 0;
}