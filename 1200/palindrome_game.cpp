#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int zero = 0;
        for(auto c: s) if(c == '0') zero++;
        
        if(zero == 0) cout << "DRAW\n";
        else if(zero == 1) cout << "BOB\n";
        else if(zero % 2 == 0) cout << "BOB\n";
        else cout << "ALICE\n";
    }
    return 0;
}