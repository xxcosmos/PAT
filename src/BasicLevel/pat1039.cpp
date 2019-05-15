//
// Created by 张啸宇 on 2019-05-15.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> dump(300, 0);
    string s;
    cin >> s;
    int length = s.length();
    for (auto c:s) {
        dump[c]++;
    }
    cin >> s;
    int cnt = 0;
    for (auto c:s) {
        if (!dump[c]) {
            cnt++;
        } else {
            dump[c]--;
        }
    }
    if (cnt) {
        cout << "No " << cnt << endl;
    } else {
        cout << "Yes " << length - s.length() << endl;
    }

    return 0;
}