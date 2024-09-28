#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ops = 0;

        if(d<b) {
            cout<<-1<<endl;
            continue;
        }
        else{
            while(d!=b){
                ops++;
                b++;
                a++;
            }
            ops+=abs(c-a);
            if(c>a) cout<<-1<<endl;
            else cout<<ops<<endl;
        }
    }
    return 0;
}