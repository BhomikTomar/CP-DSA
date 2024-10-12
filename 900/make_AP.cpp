#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        bool yes = false;
        if((2*b-c)%a == 0){
            if((2*b-c)/a > 0){
                yes = true;
            }
        }
        if((c+a)%(2*b) == 0){
            yes = true;
        }
        if((2*b-a)%c == 0){
            if((2*b-a)/c > 0){
                yes = true;
            }
        }

        if(yes) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}