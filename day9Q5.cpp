#include <iostream>
using namespace std;
void square(int a, int b){
    cout<< "Enter the A value : ";
    cin >> a;
    cout<< "Enter the B value : ";
    cin >> b;
    int root = (a*a) + (b*b) + (2*a*b);
    cout<< "Root of the Number  =  "<< root<< endl; 
}
int main (){
    square(12,14);
    return 0;
}