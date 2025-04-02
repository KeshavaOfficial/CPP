#include <iostream>
using namespace std;
char alpha( char ch){
    if (ch == 'z'){
        return 'a';
    }
    else{

        return ch +1;
    
    }
}
int main(){
    char result = alpha('z');
    cout << result ;
    return 0;


}