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
        vector<pair<int,int>> arr(n+1);
        for(int i =1;i<=n;i++){
            cin>>arr[i].first;
            arr[i].second = i;
        }

        sort(arr.begin()+1,arr.end(),greater<pair<int,int>>());

        long long total = 0;
        long long cur = 1;

        vector<long long> config(n+1);
        for(int i=1;i<=n;i++){
            total += 2*cur*arr[i].first;

            if(i%2==1){
                config[arr[i].second] = cur;
            }
            else{
                config[arr[i].second] = -cur;
                cur++;
            }
        }

        cout<<total<<endl;
        for(auto it:config){
            cout<<it<<" ";
        }
        cout<<endl;
    }
    return 0;
}