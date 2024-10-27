#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<pair<int, int>> ans;  
        for (int i = 0; i < n; i++) {
            if (arr[i] % k == 0) {
                ans.push_back({k, -i});
            } else {
                ans.push_back({arr[i] % k, -i});
            }
        }

        sort(ans.begin(), ans.end());
        for (int i = n - 1; i >= 0; i--) {
            cout << abs(ans[i].second) + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
