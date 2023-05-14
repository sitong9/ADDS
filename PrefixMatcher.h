#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include <string>
#include "Trie.h"

class PrefixMatcher{
    private:
    Trie* root;
    public:
    PrefixMatcher();
    int selectRouter(std::string networkAddress);
    void insert(std::string address, int routerNumber); 
    ~PrefixMatcher();

};

#endif

