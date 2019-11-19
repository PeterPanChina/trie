// Copyright (C) 2019 Tencent Inc.
// Author: Zujiang Pan (zujiangpan@tencent.com)
#include <iostream>
#include "trie.h"

using namespace std;

int main() {
    Trie* obj = new Trie();
    obj->insert("abcd");
    obj->insert("b");
    obj->insert("abc");
    obj->insert("ab");
    obj->insert("a");
    obj->insert("aa");
    obj->insert("a");
    obj->insert("ab");
    string query = "a";
    int frequency = 0;
    bool isApper = obj->search(query, frequency);
    if (isApper) {
        cout << frequency << endl;
    }
    else {
        cout << "Not appear" << endl;
    }

    // 字典序输出
    obj->dictionarySortPrint();
    return 0;
}