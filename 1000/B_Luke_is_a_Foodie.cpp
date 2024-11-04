#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n,x; 
        cin >> n>>x;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int changes = 0;
        vector<long long> prev = {arr[0]-x,arr[0]+x};
        for(int i=1;i<n;i++){
            vector<long long> cur = {arr[i]-x,arr[i]+x};
            vector<long long> overlap = {max(prev[0],cur[0]), min(prev[1],cur[1])};

            if(overlap[0]>overlap[1]){
                changes++;
                prev = cur;
            }
            else{
                prev = overlap;
            }
        }
        cout<<changes<<endl;
    }
    return 0;
}