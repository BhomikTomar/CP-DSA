#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            /* code */
        }

        sort(arr.begin(),arr.end());
        int l=1;
        int count=1;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]<=k) {count++;}
            else {count=1;}
            l=max(count,l);
        }

        cout<<n-l<<endl;
    }
    return 0;
}