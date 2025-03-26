#include <iostream>
using namespace std;
int main () {
    float radius, area , PI ;
    PI = 3.142;
    
    cout<<"Enter the Radius if the Circle : " ;
    cin>> radius;

    
    area = PI * radius * radius;

    cout<<"AREA of the circle is :"<< area;
    

    return 0 ;
}