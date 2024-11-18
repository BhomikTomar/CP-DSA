#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long a,b;
        cin>>a>>b;

        long long count1 = 0;
        long long count2 = 0;

        while(a%2 == 0){
            a/=2;
            count1++;
        }
        while(b%2 == 0){
            b/=2;
            count2++;
        }

        if(a!=b) cout<<-1<<endl;
        else{
            if(count1 == count2) cout<<0<<endl;
            else{
                long long diff = abs(count2 - count1);
                cout<<diff/3 + (diff%3 != 0)<<endl;
            }
        }
    }
    return 0;
}