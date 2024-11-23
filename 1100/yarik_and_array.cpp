#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n,b,sum = 0,maxi = INT_MIN,par=0;
        cin >> n;
        cin>>b;
        sum = b;
        par = abs(b)%2;
        maxi = sum;

        for (long long i = 1; i < n; ++i) {
            cin >> b;
            if(abs(b)%2 != par){
                sum += b;
            }
            else{
                sum = b;
            }
            if(b>sum){
                sum = b;
            }
            par = abs(b)%2;
            maxi = max(sum,maxi);
        }

        cout<<maxi<<endl;


    }

    return 0;
}
