#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n; 
        vector<int> nums(n);

        for(int i=0; i<n;i++){
            cin>>nums[i];
        }

        vector<int> diff;

        int l=0,r=n-1;
        while(l<=r){
            diff.push_back(abs(nums[l]-nums[r]));
            l++;
            r--;
        }

        int ans=0;
        int size=diff.size();

        for(int i=0;i<size;i++){
            ans = __gcd(ans,diff[i]);
        }

        cout<<ans<<endl;
    }
    return 0;
}