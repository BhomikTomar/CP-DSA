#include <bits/stdc++.h>
using namespace std;
char arr[105][105];

void solve() {
        int n; 
        cin >> n; 

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin >> arr[i][j];
            }
        }

        vector<int> x(4);
        vector<int> y(4);

        x[0] = 0;
        y[0] = 0;
        x[1] = 0;
        y[1] = n+1;
        x[2] = n+1;
        y[2] = n+1;
        x[3] = n+1;
        y[3] = 0;

        int ans = 0;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                int flag = 0;

                int disx = i - x[0];
                int disy = j - y[0];

                int p1x = x[1] + disy;
                int p1y = y[1] - disx;

                int p2x = x[2] - disx;
                int p2y = y[2] - disy;

                int p3x = x[3] - disy;
                int p3y = y[3] + disx;

                int cnt0 = 0;
                int cnt1 = 0;

                if(arr[i][j] == '0'){
                    cnt0++;
                }
                else{
                    cnt1++;
                }

                if(arr[p1x][p1y] == '0'){
                    cnt0++;
                }
                else{
                    cnt1++;
                }

                if(arr[p2x][p2y] == '0'){
                    cnt0++;
                }
                else{
                    cnt1++;
                }

                if(arr[p3x][p3y] == '0'){
                    cnt0++;
                }
                else{
                    cnt1++;
                }

                ans += min(cnt1, cnt0);
            }
        }

        cout << ans/4 << endl;
    }
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}
