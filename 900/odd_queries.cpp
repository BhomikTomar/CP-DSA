#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n,q;
        cin>>n>>q;

        vector<long long> arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }

        vector<long long> psum(n+1);
        for(int i=1;i<=n;i++){
            psum[i] = arr[i]+psum[i-1];
        }

        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;

            long long sum = psum[l-1] + psum[n] - psum[r] + k*(r-l+1);

            if(sum%2==1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}