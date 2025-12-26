#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n % 2 == 1) {
            cout << 0 << endl;
            continue;
        }
        int countWays = 0;

        for (int cows = 0; cows <= n; cows++) {

            int cowLegs = cows * 4;
            if (cowLegs > n) break;

            int left = n - cowLegs;

     
            if (left % 2 == 0) {
                int chickens = left / 2;
                if (chickens >= 0) {
                    countWays++;
                }
            }
        }

        cout << countWays << endl;
    }

    return 0;
}
