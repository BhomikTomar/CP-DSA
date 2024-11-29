#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n; 
        long long x, ans = 0; cin >> x;

        vector<long long> a(n);
        vector<long long> b(n);
        vector<long long> c(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) cin >> c[i];

        for(int i = 0; i < n; i++){
            if((a[i]&x) + (a[i]^x) == x) ans |= a[i];
            else break;
        }
        for(int i = 0; i < n; i++){
            if((b[i]&x) + (b[i]^x) == x) ans |= b[i];
            else break;
        }
        for(int i = 0; i < n; i++){
            if((c[i]&x) + (c[i]^x) == x) ans |= c[i];
            else break;
        }

        if(ans == x) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}