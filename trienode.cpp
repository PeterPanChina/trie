//
// Created by pzj on 2019/11/15.
//
#include "TrieNode.h"
TrieNode::~TrieNode(){
    for (auto item : children)
        delete item;
}
TrieNode* TrieNode::subNodeContains(char ch){
    for (auto item : children){
        if (item->content == ch)
            return item;
    }
    return nullptr;
}
