#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int d = k-1;
        int even_c = 0;

        for(int i=0;i<n;i++){
            if(arr[i]%2 == 0){
                even_c++;
            }
            if(arr[i]%k == 0){
                d = 0;
            }
            else{
                d = min(d, (k-arr[i]%k));
            }
        }

        if(k!=4){
            cout<<d<<endl;
        }
        else{
            if(even_c>=2){
                cout<<0<<endl;
            }
            else if(even_c == 1){
                cout<<min(d,1)<<endl;
            }
            else{
                cout<<min(2,d)<<endl;
            }
        }
    }
    return 0;
}