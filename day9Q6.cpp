#include <iostream>
using namespace std;
int largestvalue(int a,int b,int c){
    if(a>b && a>c){
        cout << " A is the greatest"<< endl;
    }else if(b>a && b>c){
        cout<< "B is the Greatest"<< endl;
    }else{
        cout<< "C is the Greatest :"<<endl;
    }
    
}
int main(){
    largestvalue(2,5,1);
    return 0;

}