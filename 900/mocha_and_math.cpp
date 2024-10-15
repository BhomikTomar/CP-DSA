#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int ans = accumulate(arr.begin(),arr.end(),arr[0],bit_and<int>());
        cout<<ans<<endl;
    }
    return 0;
}