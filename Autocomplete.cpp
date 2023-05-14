#include "TrieNode.h"
#include "Autocomplete.h"
#include <vector>
#include <string>
using namespace std;


Autocomplete::Autocomplete(){
    root = new TrieNode();
}

void Autocomplete::insert(string word){
    TrieNode* curr = root;
    for (char c: word){
        int index = c - 'a';
        if (curr->children[index]== nullptr){
            curr->children[index] = new TrieNode();
        }
        curr = curr->children[index];
    }
    curr->isEndOfWord = true;
}

void Autocomplete::dfs(TrieNode* node, string word, vector<string>& res){
    if (node -> isEndOfWord){
        res.push_back(word);
    }
    for (int i = 0 ; i<26; i++){
        if ( node -> children[i]!=nullptr){
            char c = 'a'+ i;
            dfs(node->children[i],word+c,res);
        }
    }
}

vector<string> Autocomplete::getSuggestions(string partialWord){
    vector<string> res;
    TrieNode* curr = root;
    for (char c: partialWord){
        int index = c - 'a';
        if (curr -> children[index]== nullptr){
            return res;
        }
        curr = curr->children[index];
    }
    dfs(curr, partialWord, res);
    return res;
}



Autocomplete::~Autocomplete(){
    delete root;
}


