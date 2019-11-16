//
// Created by pzj on 2019/11/15.
//
#include <queue>
#include <iostream>
#include "Trie.h"
using namespace std;
void Trie::insert(string word) {
    TrieNode* curr = root;
    for (auto ch : word){
        TrieNode* child = curr->subNodeContains(ch);
        if (child == nullptr){
            TrieNode* pTrieNode = new TrieNode(ch);
            curr->children.push_back(pTrieNode);
            curr = pTrieNode;
        }
        else {
            curr = child;
        }
        curr->shareCount++;
    }
    curr->isEnd = true;
    curr->endCount++;
}
bool Trie::search(string word, int& frequency) {
    TrieNode* curr = root;
    for (auto ch : word){
        curr = curr->subNodeContains(ch);
        if (curr == nullptr)
            return false;
    }
    if (curr->isEnd == true)
        frequency = curr->endCount;
    return curr->isEnd == true;
}
bool compare(TrieNode* pTrieNode1, TrieNode* pTrieNode2) {
    return pTrieNode1->content < pTrieNode2->content;
}
bool Trie::startsWith(string prefix) {
    TrieNode* curr = root;
    for (auto ch : prefix) {
        curr = curr->subNodeContains(ch);
        if (curr == nullptr)
            return false;
    }
    return true;
}
void Trie::dictionarySortPrint() {
    string str;
    dictionarySortPrintDFS(root, str);
}
void Trie::dictionarySortPrintDFS(TrieNode *pTrieNode, string str) {
    sort(pTrieNode->children.begin(), pTrieNode->children.end(), compare);
    str += pTrieNode->content;
    if (pTrieNode->isEnd == true)
        cout << str << " : " << pTrieNode->endCount << endl;
    for (int i=0; i<pTrieNode->children.size(); i++) {
        dictionarySortPrintDFS(pTrieNode->children[i], str);
    }
}