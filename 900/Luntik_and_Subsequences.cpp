#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long> arr(n);
        long long count0 = 0;
        long long count1 = 0;
        bool found = false;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            if(arr[i] == 0){ 
                count0++;
                found = true;
            }
            else if(arr[i] == 1) {
                count1++;
            }
        }

        if(count1 == 0){
            cout<<0<<endl;
        }
        else{
            cout<<(1LL<<count0)*count1<<endl;
        }  
    }
    return 0;
}