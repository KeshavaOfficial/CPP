#include <iostream> 
using namespace std ;
int main (){
    int days, years, weeks, redaysyears, redaysweek ;
     cout << "Enter the number of Days : ";
     cin >> days ;

     years = days / 365 ;
     redaysyears = days % 365 ;

     weeks = redaysyears/ 7 ;
     redaysweek = redaysyears % 7 ;

     cout << "The number of Years, weeks and Days are  : " 
     << years << "years\t" 
     << weeks << "weeks\t"
     << redaysweek << "days\t"
     << endl;

     
     

    return 0 ;
}
