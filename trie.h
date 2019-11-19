// Copyright (C) 2019 Tencent Inc.
// Author: Zujiang Pan (zujiangpan@tencent.com)

#ifndef APP_QZAP_SERVICE_TARGETING_CODELAB_ZUJIANGPAN_TRIECPP_TRIE_H_
#define APP_QZAP_SERVICE_TARGETING_CODELAB_ZUJIANGPAN_TRIECPP_TRIE_H_

#include <string>
#include "trienode.h"

using namespace std;
class Trie {
    /*
     * Trie树定义
     * 根节点为root
     */
private:
    TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    void insert(string word);
    bool search(string word, int& frequency);
    void dictionarySortPrint();
    void dictionarySortPrintDFS(TrieNode* pTrieNode, string str);
};

#endif //APP_QZAP_SERVICE_TARGETING_CODELAB_ZUJIANGPAN_TRIECPP_TRIE_H_
