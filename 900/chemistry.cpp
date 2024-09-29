#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        string s;
        cin>>s;

        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int odds = 0;
        for(auto it:mp){
            if(it.second % 2 == 1)odds++;
        }

        if(k<odds-1)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}