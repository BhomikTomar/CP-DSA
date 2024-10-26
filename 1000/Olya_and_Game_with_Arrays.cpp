#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini = INT_MAX;
        vector<int> min_2;
        while(n--){
            int m;
            cin>>m;
            vector<int> arr(m);
            for(int i=0;i<m;i++){
                cin>>arr[i];
            }

            int min_el = *min_element(arr.begin(),arr.end());
            mini = min(mini,min_el);

            arr.erase(find(arr.begin(),arr.end(),min_el));

            min_2.push_back(*min_element(arr.begin(),arr.end()));
        }

        long long beauty = mini + accumulate(min_2.begin(),min_2.end(),0LL) - *min_element(min_2.begin(),min_2.end());
        cout<<beauty<<endl;
    }
    return 0;
}