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
        string s;
        cin >> s;
        
        int countW = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') {
                countW++;
            }
        }
        
        int minWCount = countW;
        
        for (int i = k; i < n; i++) {
            if (s[i - k] == 'W') {
                countW--;
            }
            if (s[i] == 'W') {
                countW++;
            }
            
            minWCount = min(minWCount, countW);
        }
        
        cout << minWCount << endl;
    }
    return 0;
}
