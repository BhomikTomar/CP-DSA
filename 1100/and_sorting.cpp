#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n; 
        int ar[n+4];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        vector<int>v;
        for(int i=0;i<n;i++){
            if(ar[i]!=i){
                v.push_back(ar[i]);
            }
        }
        int ans = v[0];
        for(int i=1;i<v.size();i++){
            ans=ans&v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}