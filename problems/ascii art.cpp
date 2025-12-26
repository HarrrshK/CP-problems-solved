#include <iostream>
using namespace std;

int main() {
    int g, c, l;
    cin >> g >> c >> l;

    int big = g;
    if (c > big) big = c;
    if (l > big) big = l;

    int small = g;
    if (c < small) small = c;
    if (l < small) small = l;

    if (big - small >= 10) {
        cout << "check again";
    } else {
        int mid = g + c + l - big - small;
        cout << "final " << mid;
    }

    return 0;
}
