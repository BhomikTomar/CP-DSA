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
        map<long long, long long> mp1;
        mp1[0] = 1;
        long long sum = 0;
        long long ans = 0;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i % 2 != 0){
                arr[i] = (0 - arr[i]);
            }
            sum += arr[i];
            mp1[sum]++;
            if(mp1[sum] >= 2){
                ans = 1;
            }
        }
        if(ans == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}