#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        vector<int> x(n);

        for(int i=0;i<n;i++){
            cin>>x[i];
        }

        long long maxi = b;

        for(int i = 0;i<n;i++){
            maxi += min(1 + x[i], a) - 1;
        }
        cout << maxi << endl;
    }
    return 0;
}