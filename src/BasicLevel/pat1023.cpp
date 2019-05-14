//
// Created by 张啸宇 on 2019-05-14.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> a(10, 0);
    int first = -1;
    bool flag = false;
    for (int i = 0; i < 10; ++i) {
        cin >> a[i];
        if (a[i] != 0 && i != 0 && !flag) {
            first = i;
            flag = true;
        }
    }

    cout << first;
    a[first]--;
    for (int i = 0; i < 10; ++i) {
        while (a[i] != 0) {
            cout << i;
            a[i]--;
        }
    }
    cout << endl;


}