//
// Created by 张啸宇 on 2019-05-15.
//
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(6, 0);
    int num;
    int flag = 1;
    vector<bool> flags(6, false);
    double a4 = 0;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (num % 10 == 0) {
            a[1] += num;
            flags[1] = true;
        } else if (num % 5 == 1) {
            a[2] += flag * num;
            flag = -flag;
            flags[2] = true;
        } else if (num % 5 == 2) {
            a[3]++;
            flags[3] = true;
        } else if (num % 5 == 3) {
            a4 += num;
            a[4]++;
            flags[4] = true;
        } else if (num % 5 == 4) {
            a[5] = (a[5] > num ? a[5] : num);
            flags[5] = true;
        }
    }
    for (int j = 1; j < 6; ++j) {
        if (j != 4) {
            if (flags[j]) {
                cout << a[j];
            } else {
                cout << "N";
            }
        } else {
            if (flags[j]) {
                cout << fixed << setprecision(1) << a4 / a[4];
            } else {
                cout << "N";

            }
        }

        if (j != 5)
            cout << " ";
        else cout << endl;
    }


    return 0;
}