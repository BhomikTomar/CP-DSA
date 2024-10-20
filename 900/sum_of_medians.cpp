#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        int x = n*k;
        vector<int> arr(x);

        for(int i=0; i<x; i++){
            cin>>arr[i];
        }

        long long sum = 0;
        int index = x;

        while(k--){
            index -= (n/2 + 1);
            sum += arr[index];
        }

        cout<<sum<<endl;
    }
    return 0;
}