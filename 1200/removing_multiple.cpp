#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<bool> visited(n + 1, false); 
        long long total_cost = 0;

        for (int k = 1; k <= n; ++k) {
            for (int multiple = k; multiple <= n; multiple += k) {
                if (s[multiple - 1] == '1') break; 
                if (!visited[multiple]) {
                    total_cost += k; 
                    visited[multiple] = true; 
                }
            }
        }

        cout << total_cost << '\n';
    }

    return 0;
}
