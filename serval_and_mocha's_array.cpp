#include<iostream>
#include<vector>
using namespace std;
int gcd(int a,int b){
    if (b==0 ) return a;
    return gcd(b,a%b) ;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i =0 ;i<n;i++){
            cin>>arr[i];
        }

        int found = false;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(gcd(arr[i],arr[j])<=2){
                    found=true;
                    break;
                }
            }
            if(found) break;
        }
        if(found)cout<<"YES\n";
        else cout<<"NO\n";
    }
   return 0;
}