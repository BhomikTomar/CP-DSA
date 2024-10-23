#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
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
        int i;

        for(i =0;i<n;i++){
            if(s[i]=='1'){
                if(count0>0){
                    count0--;
                }
                else{
                    break;
                }
            }
            else{
                if(count1>0){
                    count1--;
                }
                else{
                    break;
                }
            }
        }

        cout<<n-i<<endl;
    }
    return 0;
}