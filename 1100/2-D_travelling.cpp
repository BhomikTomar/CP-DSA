#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        long long n,k,a,b,price,pricea_major = LONG_LONG_MAX/2,priceb_major = LONG_LONG_MAX/2;
        cin >> n >>k>>a>>b;
        vector<long long> x(n+1),y(n+1);
        for(long long i=1;i<=n;i++){
            cin>>x[i]>>y[i];
        } 
        price = abs(x[a]-x[b]) + abs(y[a]-y[b]);
        for(long long maj = 1;maj <= k;maj++){
            pricea_major = min(pricea_major,abs(x[a]-x[maj]) + abs(y[a] - y[maj]));
            priceb_major = min(priceb_major,abs(x[b]-x[maj]) + abs(y[b] - y[maj]));
        }
        cout<<min(price,pricea_major+priceb_major)<<endl;

    }
    return 0;
}