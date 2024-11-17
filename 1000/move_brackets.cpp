#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;

        string s;
        cin>>s;

        stack<char> st;
        for(auto ch:s){
            if(ch == '('){
                st.push(ch);
            }
            else{
                if(!st.empty()) {
                    st.pop();
                }
            }
        }
        cout<<st.size()<<endl;
    }
    return 0;
}