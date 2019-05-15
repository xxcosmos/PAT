//
// Created by 张啸宇 on 2019-05-15.
//

#include <iostream>
#include <vector>

using namespace std;
struct node {
    string id;
    int seat1;
    int seat2;
};

int main() {
    int n;
    cin >> n;
    vector<struct node> a;
    struct node temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp.id >> temp.seat1 >> temp.seat2;
        a.push_back(temp);
    }
    int m;
    cin >> m;
    int num;
    for (int j = 0; j < m; ++j) {
        cin >> num;
        for (const auto &item:a) {
            if (item.seat1 == num) {
                cout << item.id << " " << item.seat2 << endl;
                break;
            }
        }
    }
    return 0;
}