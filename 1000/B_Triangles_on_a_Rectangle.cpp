#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int w,h;
        cin>>w>>h;
        
        long long ans = 0;

        for(int i = 0;i<4;i++){
            int k;
            cin>>k;

            vector<long long> points(k);
            for(int j=0;j<k;j++){
                cin>>points[j];
            }

            ans = max(ans,(points[k-1]-points[0])*(i<2?h:w));
        }
        cout<<ans<<endl;
    }
    return 0;
}