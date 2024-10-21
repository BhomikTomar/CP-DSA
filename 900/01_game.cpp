#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int count0 = 0;
        int count1 = 0;

        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count0++;
            }
            else{
                count1++;
            }
        }

        int total = min(count0,count1);
        if(total%2 == 0){
            cout<<"NET\n";
        }
        else{
            cout<<"DA\n";
        }
    }
    return 0;
}