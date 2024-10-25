#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;

        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        vector<pair<long long,long long>> mp;
        mp.push_back({p,n+1});

        for(int i=0;i<n;i++){
            mp.push_back(make_pair(b[i],a[i]));
        }

        sort(mp.begin(),mp.end());

        int total = 1;
        long long cost = p;
        int i = 0;

        while(total<n){
            int left = n-total;
            if(mp[i].second <= left){
                total += mp[i].second;
                cost = cost + mp[i].first*1LL*mp[i].second;
            }
            else{
                total = n;
                cost = cost + left*1LL*mp[i].first;
            }
            i++;
        }

        cout<<cost<<endl;

    }
    return 0;
}