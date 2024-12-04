#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        int n = str.size();
        int mx = 0, cnt = 0, fig = 1, s = 0;

        for (int i = 0; i < n; i++) {
            if (str[i] == '1') {
                cnt++;
            } else {
                if (fig) {
                    fig = 0;
                    s = cnt;
                }
                mx = max(mx, cnt);
                cnt = 0;
            }
        }

        mx = max(mx, cnt);
        int e = cnt;
        mx = max(mx, s + e);

        if (fig) {
            cout << 1LL * n * n << endl; 
        } else {
            int r = (mx - 1) / 2;
            long long ans = 1LL * (mx - r) * (r + 1); 
            cout << ans << endl;
        }
    }
    return 0;
}
