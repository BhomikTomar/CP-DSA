#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);
        int odd = 0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        for(int i=0;i<n;i++){
            if(arr[i]%2==1) odd++;
        }

        if(odd%2==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
   return 0;
}