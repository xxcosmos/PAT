//
// Created by 张啸宇 on 2019-05-05.
//

#include <iostream>
#include <string>

using namespace std;

int getsum(string s, int da) {
    int sum = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] - '0' == da) {
            sum *= 10;
            sum += da;
        }
    }
    return sum;
}

int main() {
    string sa, sb;
    int da, db;
    cin >> sa >> da >> sb >> db;
    int na = getsum(sa, da);
    int nb = getsum(sb, db);
    cout << na + nb << endl;

    return 0;
}