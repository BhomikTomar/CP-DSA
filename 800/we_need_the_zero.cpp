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
        int total = 0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            total^=arr[i];
        }

        if(n%2==1) cout<< total<<endl;
        else{
            if(total == 0) cout<<0<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}