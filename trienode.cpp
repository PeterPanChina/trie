// Copyright (C) 2019 Tencent Inc.
// Author: Zujiang Pan (zujiangpan@tencent.com)
#include "trienode.h"

TrieNode::~TrieNode() {
    for (auto item : children)
        delete item;
}

TrieNode* TrieNode::subNodeContains(char ch) {
    for (auto item : children) {
        if (item->content == ch)
            return item;
    }
    return nullptr;
}
