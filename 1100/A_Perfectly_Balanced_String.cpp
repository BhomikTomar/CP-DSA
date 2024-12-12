#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        set<char> diff;
        string s;
        cin >> s;
        for(auto i:s){
            diff.insert(i);
        }

        int ok = 1;
        for(int i=0;i<s.size();i++){
            if(s[i] != s[i%(int)diff.size()]) ok=0;
        }
        cout<<(ok ? "YES":"NO") << "\n";
    }
    return 0;
}