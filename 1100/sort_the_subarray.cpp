#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n), a1(n);

        // Input the two arrays
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++) {
            cin >> a1[i];
        }

        long long first = -1, second = -1;
        long long first1 = -1, second1 = -1;

        // Find the first mismatch from the start
        for (long long i = 0; i < n; i++) {
            if (a[i] != a1[i]) {
                first = i;
                break;
            }
        }

        // Find the last mismatch from the end
        for (long long i = n - 1; i >= 0; i--) {
            if (a[i] != a1[i]) {
                second = i;
                break;
            }
        }

        // Expand the range backwards to include valid indices
        for (long long i = first; i > 0; i--) {
            if (a1[i] >= a1[i - 1]) {
                first1 = i - 1;
            } else {
                break;
            }
        }

        // Expand the range forwards to include valid indices
        for (long long i = second; i < n - 1; i++) {
            if (a1[i] <= a1[i + 1]) {
                second1 = i + 1;
            } else {
                break;
            }
        }

        // Determine the 1-based indices for the output
        if (first1 != -1) {
            cout << first1 + 1;
        } else {
            cout << first + 1;
        }
        cout << " ";
        if (second1 != -1) {
            cout << second1 + 1;
        } else {
            cout << second + 1;
        }
        cout << endl;
    }

    return 0;
}
