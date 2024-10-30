#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> prefix_distinct(n), suffix_distinct(n);
        
        unordered_set<char> prefix_set;
        for (int i = 0; i < n; ++i) {
            prefix_set.insert(s[i]);
            prefix_distinct[i] = prefix_set.size();
        }
        
        unordered_set<char> suffix_set;
        for (int i = n - 1; i >= 0; --i) {
            suffix_set.insert(s[i]);
            suffix_distinct[i] = suffix_set.size();
        }
        
        int max_distinct = 0;
        for (int i = 0; i < n - 1; ++i) {
            max_distinct = max(max_distinct, prefix_distinct[i] + suffix_distinct[i + 1]);
        }
        
        cout << max_distinct << endl;
    }
    
    return 0;
}
