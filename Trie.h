#ifndef TRIE_H
#define TRIE_H
#include <vector>

class Trie{
    public:
    int routerNumber;
    std::vector<Trie *> children;
    Trie();
};

#endif