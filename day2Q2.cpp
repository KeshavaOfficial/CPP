#include <iostream>
using namespace std ;
int main (){
    float pencil ;
    float pen ;
    float eraser ;
    cout<< "Enter the cost of pen : ";
    cin>> pen;
    cout<< "enter the cost of the pencil : ";
    cin>> pencil;
    cout<<"Enter the cost of the Eraser : ";
    cin >> eraser;

    float Cost ;
    Cost = pen + pencil + eraser;
    cout<<"Cost of the Stationary is : "<< Cost <<endl;

    float GST ;
    GST = (Cost/100)*18;
    cout<<"GST for the Stationary is :"<< GST << endl;

    float TotalCost;
    TotalCost = Cost+GST;
    cout<<"Total Cost  = "<< TotalCost << endl;



    return 0;
}