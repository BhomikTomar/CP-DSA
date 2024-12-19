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

        vector<pair<int,int>> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) cin >> a[i].first, a[i].second = i;
        for (int i = 0; i < n; i++) cin >> b[i].first, b[i].second = i;
        for (int i = 0; i < n; i++) cin >> c[i].first, c[i].second = i;

        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
        sort(c.begin(), c.end());
        reverse(c.begin(), c.end());

        int ans = 0;

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    int a1 = a[i].second;
                    int a2 = b[j].second;
                    int a3 = c[k].second;

                    if(a1 == a2 || a1 == a3 || a2 == a3){
                        continue;
                    }

                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
