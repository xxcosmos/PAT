//
// Created by 张啸宇 on 2019-05-18.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    char c;
    cin >> n >> c;

    for (int i = 0; i < (n + 1) / 2; ++i) {

        if (i == 0 || i == (n + 1) / 2 - 1) {
            for (int j = 0; j < n; ++j) {
                cout << c;
            }
            cout << endl;
            continue;
        }
        cout << c;
        for (int k = 1; k < n - 1; ++k) {
            cout << " ";
        }
        cout << c << endl;
    }
    return 0;
}