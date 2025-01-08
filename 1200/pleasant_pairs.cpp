#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(2*n+1, -1); 

        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            arr[a] = i;
        }

        int ans = 0;

        for (int i = 3; i < 2*n; i++) {
            for (int k = 1; k*k <= i; k++) {
                if (i % k == 0 && k * k != i && arr[k] != -1 && arr[i/k] != -1 && arr[k] + arr[i/k] == i) {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
