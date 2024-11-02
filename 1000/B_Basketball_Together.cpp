#include <bits/stdc++.h>
using namespace std;

int main() {
        int n,d;
        cin >> n>>d; 
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        int wins = 0;
        int i=-1;
        int j=n-1;
        long long cur = arr[j];
        while(i<j){
            long long maxp = arr[j];
            if(cur<=d){
                i++;
                cur+=maxp;
            }
            else{
                wins++;
                j--;
                if(j>=0){cur = arr[j];}
            }
        }

        cout<<wins<<endl;
    return 0;
}