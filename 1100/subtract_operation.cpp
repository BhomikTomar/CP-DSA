#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k; 

        vector<int> arr(n);

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(),arr.end());
        bool flag = false;

        for(int i = 0; i < n; i++){
            int to_find = arr[i] + k;
            if(binary_search(arr.begin() + i + 1, arr.begin() + n, to_find)){
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if(!flag) cout << "NO\n";
    }
    return 0;
}