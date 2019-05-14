//
// Created by 张啸宇 on 2019-05-14.
//

#include <iostream>

using namespace std;

int main() {
    int n, m;
    bool flag = true;
    while (cin >> n >> m) {
        if (m == 0)
            continue;
        if (flag) {
            flag = false;
            cout << n * m << " " << m - 1;
        } else {
            cout << " " << n * m << " " << m - 1;
        }

    }
    if (flag == 1)cout << "0 0";
    return 0;
}