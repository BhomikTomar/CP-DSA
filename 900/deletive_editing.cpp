#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
        string s,t;
        cin>>s>>t;

        map<char,int> m1,m2;
        for(auto it:s){m1[it]++;}
        for(auto it:t){m2[it]++;}

        int i=0;
        int j=0;

        while(i<s.size() && j<t.size()){
            if(s[i] == t[j]){
                if(m1[s[i]] < m2[t[j]]){
                    break;
                }

                if(m1[s[i]] == m2[t[j]]){
                    m2[t[j]]--;
                    j++;
                }
            }
            m1[s[i]]--;
            i++;
        }

        if(j == t.size()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}