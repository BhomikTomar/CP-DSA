#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;

        k--;
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }

        if (n % 2 == 0) {
            int ans = k % n;
            cout << ans + 1 << endl;
        } 
        else {
            int mid = n / 2;
            int ans = ((k / mid) + k) % n;
            cout << ans + 1 << endl;
        }
    }
    return 0;
}
