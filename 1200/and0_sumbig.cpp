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

        const int MOD = 1e9 + 7;
        long long ans = 1;

        for(int i = 0; i < k; i++){
            ans *= n;
            ans %= MOD;
        }

        cout << ans << endl;
    }
    return 0;
}