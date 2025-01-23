#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 998244353;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll extras = 0, min_ops = 0, factorial = 1, res = 1;
        string s;
        cin >> s;

        vector<ll> v(s.size());

        for (ll i = 0; i < (ll)s.size() - 1; i++) {
            if (s[i] == s[i + 1]) {
                extras++;
            } else {
                min_ops += extras;
                extras++;
                res = (res % mod * extras % mod) % mod;
                extras = 0;
            }
        }

        if (extras != 0) {
            min_ops += extras;
            extras++;
            res = (res % mod * extras % mod) % mod;
        }

        for (ll i = 1; i <= min_ops; i++) {
            factorial = ((factorial % mod) * (i % mod)) % mod;
        }

        res = ((res % mod) * (factorial % mod)) % mod;

        cout << min_ops << " " << res << endl;      
    }
    return 0;
}