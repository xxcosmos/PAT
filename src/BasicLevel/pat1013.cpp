//
// Created by 张啸宇 on 2019-05-15.
//

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i < sqrt(n) + 1 && i < n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    int cnt = 0;
    int num = 2;
    int x = 0;
    while (m <= n) {
        if (isPrime(num)) {
            cnt++;
        }
        if (cnt == m) {
            cout << num;
            x++;

            if (x % 10 == 0 || m == n) {
                cout << endl;
            } else {
                cout << " ";
            }
            m++;
        }

        num++;

    }

    return 0;
}