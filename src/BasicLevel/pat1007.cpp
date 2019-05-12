//
// Created by 张啸宇 on 2019-05-12.
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
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i <= n - 2; ++i) {
        if (isPrime(i) && isPrime(i + 2)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}