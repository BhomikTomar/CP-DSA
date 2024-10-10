#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        if(n%2==1){
            cout<<-1<<endl;
            continue;
        }
        else{
            n = n/2;
            if(n==1){
                cout<<-1<<endl;
            }
            else{
                cout<<(n/3 + (n%3 != 0 ? 1:0))<<" "<<n/2<<endl;
            }
        }
    }
    return 0;
}