#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;

        vector<long long> v(n);
        for (long long &i : v) cin >> i;

        map<long long, map<long long, long long>> mp; // Map to store counts of pairs of remainders
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            ans += mp[(x - v[i] % x) % x][v[i] % y];
            mp[v[i] % x][v[i] % y]++;
        }

        cout << ans << "\n";
    }
    return 0;
}