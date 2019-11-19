// Copyright (C) 2019 Tencent Inc.
// Author: Zujiang Pan (zujiangpan@tencent.com)

#ifndef APP_QZAP_SERVICE_TARGETING_CODELAB_ZUJIANGPAN_TRIECPP_TRIENODE_H_
#define APP_QZAP_SERVICE_TARGETING_CODELAB_ZUJIANGPAN_TRIECPP_TRIENODE_H_

#include <vector>
using  namespace std;
class TrieNode {
    /*
     * TrieNode定义
     * content存储TrieNode内容，为一个字符
     * isEnd标记Trie树此节点是否是一个单词的结尾
     * shareCount记录此时共有几个单词经过此节点
     * endCount记录此时到此节点截止的单词出现次数
     */
public:
    char content;
    bool isEnd;
    int shareCount;
    int endCount;
    vector<TrieNode*> children;
    TrieNode(): content(' '), isEnd(false), shareCount(0), endCount(0) {}
    TrieNode(char ch): content(ch), isEnd(false), shareCount(0), endCount(0) {}
    ~TrieNode();
    TrieNode* subNodeContains(char ch);
};
#endif //APP_QZAP_SERVICE_TARGETING_CODELAB_ZUJIANGPAN_TRIECPP_TRIENODE_H_
