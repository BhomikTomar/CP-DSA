#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    long long ans = 0; // Use long long to handle large sums

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += a[i]; // Accumulate sum safely
    }

    int lastAll = -1;
    int lastVal = 0;
    vector<int> lastChangedIndex(n, 0);

    for (int i = 1; i <= q; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            int pos, x;
            cin >> pos >> x;
            pos--;

            // Determine current value of a[pos]
            int currentVal = (lastChangedIndex[pos] > lastAll) ? a[pos] : lastVal;

            // Update the sum and value at position
            ans += (x - currentVal);
            a[pos] = x;
            lastChangedIndex[pos] = i;

            cout << ans << endl; // Output the sum
        } else {
            int x;
            cin >> x;

            // Apply update to all
            lastAll = i;
            lastVal = x;
            ans = (long long)x * n; // Ensure multiplication doesn't overflow

            cout << ans << endl; // Output the sum
        }
    }

    return 0;
}
