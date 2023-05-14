#ifndef TRIENODE_H
#define TRIENODE_H
#include <vector>

struct TrieNode{
    bool isEndOfWord;
    std::vector<TrieNode *> children;
    TrieNode();
};


#endif