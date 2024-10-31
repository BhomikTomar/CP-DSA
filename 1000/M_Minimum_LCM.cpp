#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

            int num=1;
            for(int i=2;i<=sqrt(n);i++){
                if(n%i==0){
                    num=n/i;
                    break;
                }
            }
            cout<<num<<" "<<n-num<<endl;
    }
    return 0;
}
