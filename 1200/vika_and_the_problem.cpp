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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> pos(k + 1, 0);
        vector<vector<int>> ans(k + 1);

        for (int i = 0; i < n; i++) {
            int lastPos = pos[a[i]];
            int dist = i - lastPos;
            ans[a[i]].push_back(dist);
            pos[a[i]] = i + 1;
        }

        int ax = n;
        for (int i = 1; i <= k; i++) {
            if (!ans[i].empty()) {
                ans[i].push_back(n - pos[i]);
                sort(ans[i].rbegin(), ans[i].rend());

                if (ans[i].size() > 1) {
                    ax = min(ax, max(ans[i][0] / 2, ans[i][1]));
                } else {
                    ax = min(ax, ans[i][0] / 2);
                }
            }
        }
        cout << ax << "\n";
    }

    return 0;
}
