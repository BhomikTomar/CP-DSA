#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; 
        cin >> n; 

        vector<int> a(n*(n - 1) / 2);

        for(int i = 0; i < n*(n - 1) / 2; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int k = n - 1;
        int ind = 0;

        for(int i = 0; i < n - 1; i++){
            int mini = 1e9;
            for(int j = 0; j < k; j++){
                mini = min(mini, a[ind++]);
            }
            k--;
            cout << mini << " ";
        }
        cout << mod-7 << " ";
        cout << "\n";
    }
    return 0;
}