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

        unordered_map<long long, long long> mp;
        long long ans = 0;

        for (long long i = 0; i < n; i++) {
            long long a;
            cin >> a;
            ans += mp[a - i];
            mp[a - i]++;
        }

        cout << ans << endl;
    }

    return 0;
}
