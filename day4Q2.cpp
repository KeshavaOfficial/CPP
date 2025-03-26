#include <iostream>
using namespace std ;
int main(){
    int Year ;
    cout << "Enter the Year " << endl ;
    cin >> Year ;
    if (Year % 4 == 0 ){
        cout<< "This is a leap Year "<<endl ;
    }else {
        cout<< "This is not a Leap  Year "<< endl ;
    }
    return 0 ;
}