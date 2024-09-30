#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long k,n,x;
        cin>>n>>k>>x;
        long long low = (k*(k+1))/2;
        long long high = (n*(n+1))/2 - ((n-k)*(n-k+1))/2;
        if(x>=low && x<=high) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}