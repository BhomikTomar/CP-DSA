#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n; 
        long long mod = 1e9 + 7;
        cin >> n;

        vector<long long> a(n), b(n);

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        } 

        for (long long i = 0; i < n; i++) {
            cin >> b[i];
        } 

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long index = 0;
        vector<long long> pos;

        for (long long i = 0; i < n; i++) {
            while (index < n && a[index] <= b[i]) {
                index++;
            }
            if (index < n) {
                pos.push_back(n - index);
            } else {
                pos.push_back(0); 
            }
        }

        sort(pos.begin(), pos.end());

        long long ways = 1;

        for (long long i = 0; i < n; i++) {
            if (pos[i] - i <= 0) {
                ways = 0;
                break;
            }
            ways = (ways * (pos[i] - i)) % mod;
        }

        cout << ways << endl;
    }
    return 0;
}
