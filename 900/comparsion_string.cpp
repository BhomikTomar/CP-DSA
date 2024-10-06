#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=1;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                count++;
            }
            else count=1;
            maxi = max(maxi,count);
        }
        cout<<maxi+1<<endl;
    }
    return 0;
}