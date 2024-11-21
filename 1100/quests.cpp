#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, k; 
        cin >> n >> k; 
        long long ans = 0;

        vector<long long> a(n), b(n), suma(n), maxb(n);

        cin >> a[0];
        suma[0] = a[0];
        
        for(long long i = 1; i < n; i++) {
            cin >> a[i];
            suma[i] = a[i] + suma[i-1];
        }

        cin >> b[0];
        maxb[0] = b[0];

        for(long long i = 1; i < n; i++) {
            cin >> b[i];
            maxb[i] = max(maxb[i-1], b[i]);
        }

        ans = INT_MIN;
        k--;

        for(long long i = 0; i < n; i++){
            ans = max(ans, suma[i] + (k-i)*maxb[i]);
            if(i == k) {
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}