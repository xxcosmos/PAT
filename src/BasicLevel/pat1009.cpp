//
// Created by 张啸宇 on 2019-05-12.
//

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<string> s;
    string ss;
    while (cin >> ss) {
        s.push(ss);
    }
    cout << s.top();
    s.pop();
    while (!s.empty()) {
        cout << " " << s.top();
        s.pop();
    }
    cout << endl;
    return 0;
}