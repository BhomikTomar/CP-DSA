#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;

        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long ways = 0;
        long long count = 0;

        for(int i=0;i<n;i++){
            if(arr[i]<=x){
                count++;
            }
            else{
                if(count>=k){
                    ways += (count*1LL*(count+1))/2 - (count*(k-1) - ((k-2)*(k-1))/2);
                }
                count = 0;
            }
        }
        if(count>=k){
            ways += (count*1LL*(count+1))/2 - ((count*(k-1)) - ((k-2)*(k-1))/2);
        }
        cout<<ways<<endl;
    }
    return 0;
}