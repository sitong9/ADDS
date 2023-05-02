#include <iostream>
#include "BigNumCalc.h"
#include <list>
#include <string>

using namespace std;

int main(){
    BigNumCalc C;
    list<int> L1 = C.buildBigNum("12345");
    list<int> L3 = C.buildBigNum("54321");
    list<int> a = C.sub(L1,L3);

    for (int item: a){
        cout<<item;
    }
}