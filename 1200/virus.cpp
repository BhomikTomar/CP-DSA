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

        int m;
        cin >> m;

        vector<int> arr(m);
        for(int i = 0; i < m; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());

        vector<int> diff;
        for(int i = 0; i < m-1; i++) diff.push_back(arr[i+1] - arr[i] - 1);

        diff.push_back(arr[0] + n - arr[m - 1] - 1);
        int tmr = 0;
        int safe = 0;
        sort(diff.begin(), diff.end(), greater<int>());

        for(int i = 0; i < diff.size(); i++){
            int curr = diff[i];
            curr -= tmr*2;
            if(curr <= 0) break;
            safe += curr - 1;
            if(curr <= 1) safe++;
            tmr += 2;
        }

        cout << n - safe << endl;
    }
    return 0;
}