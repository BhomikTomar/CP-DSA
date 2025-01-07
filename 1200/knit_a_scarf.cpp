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

        string s;
        cin >> s;

        set<char> st;
        for(int i = 0; i < n; i++){
            st.insert(s[i]);
        }

        vector<int> ans(26, INT_MAX);

        for(auto a: st){
            int i = 0;
            int j = n - 1;
            int c = 0;

            while(i < j){
                if(s[i] == s[j]){
                    i++;
                    j--;
                }
                else{
                    if(s[i] == a){
                        i++;
                        c++;
                    }
                    else if(s[j] == a){
                        j--;
                        c++;
                    }
                    else{
                        c = -1;
                        break;
                    }
                }
            }

            if(c != -1){
                ans[a - 'a'] = c;
            }
        }

        sort(ans.begin(), ans.end());

        if(ans[0] == INT_MAX){
            cout << -1 << endl;
        }
        else{
            cout << ans[0] << endl;
        }
    }
    return 0;
}