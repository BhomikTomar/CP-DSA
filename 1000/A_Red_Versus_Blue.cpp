#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int r,n,b;
        cin>>n>>r>>b;
        string ans;

        int nreds = r/(b+1);
        int rem = r%(b+1);

        for(int i=0;i<b;i++){
            for(int j=0;j<nreds; j++){
                ans.push_back('R');
            }
            if(rem){
                ans.push_back('R');
                rem--;
            }
            ans.push_back('B');
        }

        for(int i=0;i<nreds;i++){
            ans.push_back('R');
        }

        cout<<ans<<endl;
    }
    return 0;
}