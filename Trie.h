//
// Created by pzj on 2019/11/15.
//

#ifndef TRIE_TRIE_H
#define TRIE_TRIE_H

#include <vector>
#include <string>
#include "TrieNode.h"
using namespace std;
class Trie {
private:
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    void insert(string word);
    bool search(string word, int& frequency);
    bool startsWith(string prefix);
    void dictionarySortPrint();
    void dictionarySortPrintDFS(TrieNode* pTrieNode, string str);
};


#endif //TRIE_TRIE_H
