#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n; cin >> n;    

        vector<long long> arr(n);
        long long ans = 0;

        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }

        map<long long,long long> m;
        long long sum = 0;
        for(long long i =0;i<n;i++){
            sum +=arr[i];
            m[sum]=i+1;
        }

        sum=0;
        for(long long i=n-1;i>=0;i--){
            sum+=arr[i];
            if(m[sum]>0 && m[sum]<(i+1)){
                ans=max(ans,m[sum]+n-i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}