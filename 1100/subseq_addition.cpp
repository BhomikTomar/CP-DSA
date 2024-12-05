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

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr.begin(), arr.end());

        if (arr[0] != 1) {
            cout << "NO" << endl;
            continue; 
        }

        long long sum = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] <= sum) {
                sum += arr[i];
            }
            else{
                sum = -1;
                break;
            }
        }

        if (sum == -1) {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
