#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> arr(n + 1);
        vector<long long> pref(n + 1);
        vector<long long> maxi(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            pref[i] = pref[i - 1] + arr[i];
            maxi[i] = max(maxi[i - 1], arr[i]);
        }

        for(int i = 0; i < q; i++){
            long long ans = 0;
            long long x;
            cin >> x;
            int k = upper_bound(maxi.begin(), maxi.end(), x) - maxi.begin() - 1;
            if(k >= 0){
                ans = pref[k];
            }

            cout << ans << " ";
        }
        cout << endl;
    }
    return 0;
}
