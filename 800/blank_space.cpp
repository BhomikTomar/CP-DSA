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
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int maxi = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                count++;
            }
            else{
                maxi=max(maxi,count);
                count=0;
            }
        }
        maxi=max(maxi,count);
        
        cout<<maxi<<endl;
    }
   return 0;
}