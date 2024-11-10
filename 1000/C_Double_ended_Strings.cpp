#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        string a, b;
        cin >> a >> b;
        
        int ans = a.length() + b.length();
        
        for (int i = 0; i < a.length(); i++) {
            for (int j = i + 1; j <= a.length(); j++) {
                string sub = a.substr(i, j - i);
                
                if (b.find(sub) != string::npos) {
                    int ops = (a.length() - sub.length()) + (b.length() - sub.length());
                    ans = min(ans, ops);
                }
            }
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
