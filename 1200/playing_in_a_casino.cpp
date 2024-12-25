#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> v(m, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[j][i];
            }
        }

        long long ans = 0;
        for (int i = 0; i < m; i++) {
            sort(v[i].begin(), v[i].end());
            long long suffix_sum = 0;
            for (int j = n - 1; j >= 0; j--) {
                ans += suffix_sum - (long long)(n - 1 - j) * v[i][j];
                suffix_sum += v[i][j];
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
