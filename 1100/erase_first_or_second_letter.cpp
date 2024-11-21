#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin>>s;
         
        set<char> st;
        long long ans = 0;

        for(int i = 0; i < n; i++){
            st.insert(s[i]);
            ans += (long long)st.size();
        }

        cout << ans << endl;
    }
    return 0;
}