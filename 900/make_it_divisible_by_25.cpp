#include<bits/stdc++.h>
using namespace std;
int ops(string &last_two, string &s){
    int x = last_two[0];
    int y = last_two[1];

    int steps = 0;
    int j = s.length()-1;
    while(j>0 && s[j]!=y){
        j--;
        steps++;
    }

    int i = j-1;
    while(i>0 && s[i]!=x){
        i--;
        steps++;
    }
    return steps;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s = to_string(n);
        
        vector<string> digits = {"00","25","50","75"};
        int ans = INT_MAX;

        for(auto digit:digits){
            int mini = ops(digit, s);
            ans = min(ans, mini);
        }

        cout<<ans<<endl;
    }
    return 0;
}