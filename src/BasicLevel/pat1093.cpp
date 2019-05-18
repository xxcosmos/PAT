//
// Created by 张啸宇 on 2019-05-18.
//

#include <iostream>
#include <queue>
#include <set>

using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    set<char> set;
    queue<char> queue;
    int size = -1;
    for (auto item:s1) {
        set.insert(item);
        if (set.size() != size) {
            size = set.size();
            queue.push(item);
        }
    }
    for (auto item1:s2) {
        set.insert(item1);
        if (set.size() != size) {
            size = set.size();
            queue.push(item1);
        }
    }
    while (!queue.empty()) {
        cout << queue.front();
        queue.pop();
    }
    cout << endl;
    return 0;
}