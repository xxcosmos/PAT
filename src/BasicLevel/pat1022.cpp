//
// Created by 张啸宇 on 2019-05-19.
//

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>

using namespace std;

string itoa(int num, int radix) {
    string ans;
    if (num == 0) {
        return "0";
    }
    while (num) {
        ans += (num % radix) + '0';
        num /= radix;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int a, b;
    int d;
    cin >> a >> b >> d;
    cout << itoa(a + b, d) << endl;
    return 0;
}