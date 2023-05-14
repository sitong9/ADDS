#include "TrieNode.h"
#include <vector>
using namespace std;

TrieNode::TrieNode(){
    children = vector<TrieNode *>(26,nullptr);
    isEndOfWord = false;
}
