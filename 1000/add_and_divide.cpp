#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin>>a>>b;

        long long ans = LONG_LONG_MAX;
        for(int i=0;i<30;i++){
            long long x = a;
            if(b+i >= 2){
                long long turns = i;
                while(x>0){
                    x/=(b+i);
                    turns++;
                }
                ans = min(ans,turns);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}