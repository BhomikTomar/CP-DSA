#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n; 
        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        vector<int> ans(n);
        for(int i = 0; i < n; i++){
            ans[i] = a[i] - b[i];
        }

        int maxi = *max_element(ans.begin(), ans.end());

        vector<int> res;
        for(int i = 0; i < n; i++){
            if(ans[i] == maxi) res.push_back(i + 1);
        }

        cout << res.size() << endl;
        for(auto i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}