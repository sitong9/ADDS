#include <iostream>
#include "Reverser.h"
#include <string>
using namespace std;


int main(){
    Reverser R;
    int reversedNum= R.reverseDigit(12345);
    cout<<reversedNum<<endl;
    
    string reverseString= R.reverseString("abcd");
    cout<<reverseString<<endl;

    return 0;
}