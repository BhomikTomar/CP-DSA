#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        bool ok = true;
        vector<int> a(n); // Declare an array to store results

        for (int i = 1; i <= n; i++) {
            // Compute the smallest multiple of i within [l, r]
            a[i - 1] = ((l + i - 1) / i) * i; // Formula for the next multiple of i >= l
            if (a[i - 1] > r) {
                ok = false; // If the multiple exceeds r, it's invalid
                break;
            }
        }

        if (ok) {
            cout << "YES\n";
            for (int i = 1; i <= n; i++) {
                cout << a[i] << " ";
            }
            cout << "\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
