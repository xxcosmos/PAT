//
// Created by 张啸宇 on 2019-05-15.
//

#include <iostream>

using namespace std;

int main() {
    int galleon, sickle, knut;
    scanf("%d.%d.%d", &galleon, &sickle, &knut);
    int galleon1, sickle1, knut1;
    scanf("%d.%d.%d", &galleon1, &sickle1, &knut1);
    if (galleon > galleon1 || (galleon == galleon1 && sickle > sickle1) ||
        (galleon == galleon1 && sickle == sickle1 && knut > knut1)) {
        swap(galleon, galleon1);
        swap(sickle, sickle1);
        swap(knut, knut1);
        cout << "-";
    }
    if (knut1 < knut) {
        knut1 += 29;
        sickle1 -= 1;
    }
    knut = knut1 - knut;
    if (sickle1 < sickle) {
        sickle1 += 17;
        galleon1--;
    }
    sickle = sickle1 - sickle;

    galleon = galleon1 - galleon;
    cout << galleon << "." << sickle << "." << knut << endl;
    return 0;
}