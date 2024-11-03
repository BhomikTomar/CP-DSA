#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        if(s<k*b || s>(k*b + n*(k-1))){
            cout<<"-1"<<endl;
            continue;
        }

        long long a1 = k*b;
        s-=k*b;

        if(s>= k-1){
            a1 += (k-1);
            s -= (k-1);
        }
        else{
            a1 += s;
            s = 0;
        }

        cout<<a1<<" ";

        for(int i =2;i<=n;i++){
            long long ai;
            if(s>= k-1){
                ai = k-1;
                s -= ai;
            }
            else{
                ai = s;
                s -= ai;
            }
            cout<<ai<<" ";
        }
        cout<<endl;
    }
    return 0;
}