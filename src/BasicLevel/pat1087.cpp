//
// Created by 张啸宇 on 2019-05-15.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dump(n * 3, 0);
    int temp;
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        temp = i / 2 + i / 3 + i / 5;
        if (dump[temp] == 0) {
            cnt++;
            dump[temp] = 1;

        }
    }
    cout << cnt << endl;
    return 0;
}