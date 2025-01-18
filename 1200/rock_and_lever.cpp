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
        for (int i = 0; i < n; i++) 
            cin >> arr[i];

        vector<bool> vis(n, false);
        long long total = 0;

        for(int i = 31; i >= 0; i--){
            long long num = 0;
            for(int j = 0; j < n; j++){
                if((1 << i) & (arr[j]) && !vis[j]) num++;
            }
            if(num){
                for(int j = 0; j < n; j++){
                    if((1 << i) & arr[j] && !vis[j]) vis[j] = true;
                }
                total += (num * (num - 1)) / 2;
            }
        }
        cout << total << endl;
    }
    return 0;
}
