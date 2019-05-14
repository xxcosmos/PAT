//
// Created by 张啸宇 on 2019-05-14.
//
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    long long int a, b, c;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b >> c;
        cout << "Case #" << i + 1 << ": ";
        if (a > c - b) {
            cout << "true";
        } else {
            cout << "false";
        }
        cout << endl;

    }
    return 0;
}
