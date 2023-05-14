#include "Trie.h"
#include <vector>
using namespace std;

Trie::Trie(){
    int router = -1;
    children = vector<Trie *>(2,nullptr);

}