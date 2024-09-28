#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,k1,k2,q1,q2;
        cin>>a>>b;
        cin>>k1>>k2;
        cin>>q1>>q2;

        vector<pair<int,int>> dirs = {{a,b},{a,-b},{-a,b},{-a,-b},{b,a},{b,-a},{-b,a},{-b,-a}};
        set<pair<int,int>> set1,set2;

        for(auto i:dirs){
            int x = k1+i.first;
            int y = k2+i.second;

            set1.insert(make_pair(x,y));

            x = q1+i.first;
            y = q2+i.second;

            set2.insert(make_pair(x,y));
        }

        int ans=0;
        for(auto i:set1){
            if(set2.find(i) !=set2.end()) ans++;
        }

        cout<<ans<<endl;
    }
}