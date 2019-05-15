//
// Created by 张啸宇 on 2019-05-15.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> dump(10, 0);
    string s;
    cin >> s;
    for (auto c:s) {
        dump[c - '0']++;
    }
    for (int i = 0; i < 10; ++i) {
        if (dump[i] != 0)
            cout << i << ":" << dump[i] << endl;
    }
    return 0;
}