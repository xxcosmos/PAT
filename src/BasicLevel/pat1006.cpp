//
// Created by 张啸宇 on 2019-05-05.
//

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int b = n / 100;
    while (b--) {
        cout << "B";
    }
    int s = n % 100 / 10;
    while (s--) {
        cout << "S";
    }
    int m = n % 10;
    for (int i = 1; i <= m; ++i) {
        cout << i;
    }
    cout << endl;
    return 0;
}