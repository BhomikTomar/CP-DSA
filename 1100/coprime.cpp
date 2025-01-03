#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;

        vector<int> a(1001, -1);

        for(int i = 1; i <= n; i++){
            cin>>x;
            a[x]=i;
        }

        int ans = -1;
        for(int i=1;i<1001;i++){
            if(a[i]!=-1){
                for(int j=1;j<1001;j++){
                    if(a[j]!=-1 && __gcd(i,j)==1){
                        ans=max(ans, a[i]+a[j]);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}