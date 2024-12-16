#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n; 
        vector<long long> arr(n);

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long g = 0;
        long long l = 0;
        for(int i=0;i<n;i+=2){
            g = __gcd(g,arr[i]);
        }
        for(int i=1;i<n;i+=2){
            l = __gcd(l,arr[i]);
        }

        bool ok = true;
        for(int i=0;i<n;i+=2){
            if(arr[i]%l == 0){
                ok=false;
                break;
            }
        }

        if(ok){
            cout<<l<<"\n";
            continue;
        }

        ok = true;

        for(int i=1;i<n;i+=2){
            
        }

        ok = true;
        for(int i=1;i<n;i+=2){
            if(arr[i]%g==0){
                ok = false;
                break;
            }
        }
        if(ok){
            cout<<g<<"\n";
            continue;
        }
        cout<<"0\n";
    }
    return 0;
}