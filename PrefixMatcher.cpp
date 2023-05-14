#include "Trie.h"
#include "PrefixMatcher.h"
#include <string>
using namespace std;

PrefixMatcher::PrefixMatcher(){
    root = new Trie();
}

void PrefixMatcher::insert(string address, int routerNumber){
    Trie* curr = root;
    for (int i = 0; i<address.size();i++){
        int bit  = address[i]-'0';
        if (curr ->children[bit] == nullptr){
            curr->children[bit] = new Trie();
        }
        curr = curr ->children[bit];
    }
    curr->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(std::string networkAddress){
    Trie* curr = root;
    int lastMatchedRouter = -1;
    for (int i = 0 ; i< networkAddress.size(); i++){
        int bit = networkAddress[i]- '0';
        if (curr -> children[bit]==nullptr){
            break;
        }
        curr = curr->children[bit];
        if(curr->routerNumber!=-1){
            lastMatchedRouter = curr -> routerNumber;
        }
    }
    return lastMatchedRouter;
}


PrefixMatcher::~PrefixMatcher(){
}

