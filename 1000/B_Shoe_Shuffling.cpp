#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++ ) {
            cin>>arr[i];
        }

        vector<int> shuffle(n);
        for(int i=0;i<n;i++){
            shuffle[i] = i+1;
        }

        int i =0;
        while(i<n){
            int cur = arr[i];
            int start = i;
            int end = i;
            while(end<n && arr[end]==cur) end++;
            if(start == end-1){
                cout<<"-1"<<endl;
                return;
            }
            rotate(shuffle.begin()+start,shuffle.begin()+start+1,shuffle.begin()+end);
            i = end;
        }
        for(auto s:shuffle){
            cout<<s<<" ";
        }
        cout<<endl;
        }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}