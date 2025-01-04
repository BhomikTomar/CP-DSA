#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        long long ans = 0;
        vector<long long> arr(n);

        for(long long i = 0; i < n; i++){
            cin >> arr[i];
        } 

        sort(arr.begin(), arr.end());
        vector<long long> prefix(n, 0);

        long long sum = 0;
        for(long long i = 0; i < n; i++){
            sum += arr[i];
            prefix[i] = sum;
        }

        for(long long i = n - 1; i >= 0; i--){
            long long diff = x - prefix[i];
            if(diff >= 0 && diff / (i + 1) >= 0){
                ans += (diff / (i + 1)) + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}