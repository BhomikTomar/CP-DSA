#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;

        if(a==b){
            cout<<0<<" "<<0<<endl;
        }
        else{
            if(a<b){
                swap(a,b);
            }
            long long delta = a-b;
            cout<<delta<<" "<<min(b%delta, delta-b%delta)<<endl;
        }
    }
    return 0;
}