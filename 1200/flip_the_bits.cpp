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

        string a;
        string b;

        cin >> a >> b;

        int one = 0;
        int zero = 0;

        vector<pair<int, int>> x;
        int j = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == '1') one++;
            else zero++;
            if(one == zero){
                x.push_back({j, i});
                j = i + 1;
            }
        }

        for(auto i : x){
            int start = i.first;
            int end = i.second;
            if(a[start] == b[start]) continue;
            else{
                for(int j = start; j <= end; j++){
                    if(a[j] == '0') a[j] = '1';
                    else{
                        a[j] = '0';
                    }
                }
            }
        }
        bool found = true;

        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                found = false;
                break;
            }
        }

        if(found) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}