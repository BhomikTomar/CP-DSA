#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        
        int maxi = arr[n]-arr[1];
        for(int i=1;i<=n-1;i++){
            maxi=max(maxi,arr[n]-arr[i]);
        }
        for(int i=2;i<=n;i++){
            maxi=max(maxi,arr[i]-arr[1]);
        }
        for(int i=1;i<=n-1;i++){
            maxi=max(maxi,arr[i]-arr[i+1]);
        }

        cout<<maxi<<endl;
    }
    return 0;
}