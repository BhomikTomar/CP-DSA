#include <bits/stdc++.h>
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

        int l=-1;
        int r=-1;
        for(int i=1;i<=n;i++){
            if(arr[i]!=0){
                if(l==-1 && r==-1){
                    l=r=i;
                }
                else{
                    r=i;
                }
            }
        }

        if(l==-1 && r==-1){
            cout<<0<<endl;
        }
        else{
            bool found = false;
            for(int i=l;i<=r;i++){
                if(arr[i]==0){
                    found = true;
                }
            }
            if(found){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
    return 0;
}