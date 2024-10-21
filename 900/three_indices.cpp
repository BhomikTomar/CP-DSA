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
        int prev,curr,next;
        bool found = false;

        for(int i = 2;i <= n-1;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                found = true;
                prev = i-1;
                curr = i;
                next = i+1;
                break;
            }
        }
        if(found){
            cout<<"YES\n";
            cout<<prev<<" "<<curr<<" "<<next<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}