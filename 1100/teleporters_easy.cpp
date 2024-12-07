#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n, c;
        cin >> n >> c; 

        vector<long long> arr(n);
        long long sum = 0;

        for(long long i = 0; i < n; i++){
            cin >> arr[i];
            arr[i] = arr[i] + i + 1;
        }

        sort(arr.begin(),arr.end());
        int ans = n;

        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum > c){
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}