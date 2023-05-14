#include "Trie.h"
#include "PrefixMatcher.h"
#include <string>
using namespace std;
#include <iostream>

int main() {
    PrefixMatcher matcher;

    matcher.insert("110011011101", 1);
    matcher.insert("110011011", 2);
    matcher.insert("11001101", 3);

    string networkAddress = "110011011101";
    int routerNumber = matcher.selectRouter(networkAddress);

    cout <<routerNumber<<endl;  // returns 1 << routerNumber << endl;

    return 0;
}
