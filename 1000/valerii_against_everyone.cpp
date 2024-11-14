#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        vector<long long> b(n);
        set<int> st;

        for(int i=0;i<n;i++){
            cin>>b[i];
            st.insert(b[i]);
        }

        if(st.size() == n){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}