#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int Sa = 0, Sb = 0;
        int oddDiffCount = 0, evenDiffCount = 0;
        for (int i = 0; i < n; ++i) {
            Sa ^= a[i];
            Sb ^= b[i];
            int delta = a[i] ^ b[i];
            if (delta) {
                if ((i + 1) % 2 == 1) ++oddDiffCount;
                else ++evenDiffCount;
            }
        }
        if (Sa == Sb) {
            cout << "Tie\n";
        } else if (Sa == 1 && Sb == 0) {
           
            if (evenDiffCount == 0) cout << "Ajisai\n";
            else cout << "Mai\n";
        } else { 
            
            if (oddDiffCount == 0) cout << "Mai\n";
            else cout << "Ajisai\n";
        }
    }
    return 0;
}
