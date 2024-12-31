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

        vector<int> a(n);
        vector<int> b(n);
        vector<int> d(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        for(int i = 0; i < n; i++) d[i] = b[i] - a[i];

        int i = 0, j = n - 1, ans = 0;
        sort(d.begin(), d.end());

        while(i < j){
            int sum = d[i] + d[j];
            if(sum < 0){
                i++;
            }
            else{
                ans++;
                i++;
                j--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}