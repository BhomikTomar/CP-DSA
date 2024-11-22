#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;

        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<pair<long long,long long>> vp;
        for(long long i = 0; i < n; i++){
            vp.push_back(make_pair(arr[i],i));
        }

        sort(vp.begin(),vp.end());
        vector<long long> ans(n,0);
        vector<long long> pre(n,0);

        long long sum =0;
        
        for(int i=0;i<n;i++){
            sum += vp[i].first;
            pre[i] = sum;
        }

        long long j = 0;
        long long mk = 0;

        for(long long i=0;i<n;i++){
            j = max(j,i);
            while(j<n-1 && pre[j]>=vp[j+1].first){
                j++;
            }

            ans[vp[i].second] = j;

        }

        for(int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}