#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    
    string s;
    cin>>s;

    bool found = false;
    int index = -1;

    for(int i = 0; i < t-1; i++){
        if(s[i+1] < s[i]){
            found = true;
            index = i;
            break;
        }
    }

    if(found) {
        cout << "YES\n";
        cout << index + 1 << " " << index + 2;
    }
    else cout << "NO\n";
    return 0;
}