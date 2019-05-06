//
// Created by 张啸宇 on 2019-05-06.
//

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
    vector<int> grade(1002, 0);

    int n;
    cin >> n;
    int index;
    int num;
    int g;
    while (n--) {
        scanf("%d-%d", &index, &num);
        cin >> g;
        grade[index] += g;
    }
    int maxn = INT32_MIN;
    for (int i = 1; i <= 1000; ++i) {
        if (grade[i] > maxn) {

            index = i;
            maxn = grade[i];
        }
    }
    cout << index << " " << maxn << endl;

    return 0;
}