#ifndef TRIE_H
#define TRIE_H
#include <vector>

class Trie{
    public:
    int router;
    std::vector<Trie *> children;
    Trie();
};

#endif