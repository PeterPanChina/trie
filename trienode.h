//
// Created by pzj on 2019/11/15.
//

#ifndef TRIE_TRIENODE_H
#define TRIE_TRIENODE_H

#include <vector>
using  namespace std;
class TrieNode{
public:
    char content;
    bool isEnd;
    int shareCount;
    int endCount;
    vector<TrieNode*> children;
    TrieNode(): content(' '), isEnd(false), shareCount(0), endCount(0){}
    TrieNode(char ch): content(ch), isEnd(false), shareCount(0), endCount(0){}
    ~TrieNode();
    TrieNode* subNodeContains(char ch);
};
#endif //TRIE_TRIENODE_H
