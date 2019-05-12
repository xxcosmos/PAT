//
// Created by 张啸宇 on 2019-05-12.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    m = m % n;
    vector<int> a(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int j = n - m; j < n; ++j) {
        cout << a[j] << " ";
    }
    for (int k = 0; k < n - m - 1; ++k) {
        cout << a[k] << " ";
    }
    cout << a[n - m - 1] << endl;
    return 0;
}