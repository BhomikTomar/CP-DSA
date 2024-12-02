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

        vector<long long> arr(n), pre(n+1);

        for (long long i = 0; i < n; i++) {
            cin >> arr[i]; 
        }

        long long maxi = 0;

        sort(arr.begin(), arr.end());

        for (long long i = 0; i < n; i++) {
            pre[i+1] = pre[i] + arr[i];
        }

        for (long long i = 0; i <= k; i++) {
            maxi = max(maxi, pre[n-i] - pre[2*(k-i)]);
        }

        cout << maxi << endl;
    }
    return 0;
}
