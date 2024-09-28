#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;

        bool found = false;
        for(int i=0;i<=5;i++){
            if(x.find(s) != string::npos){
                cout<< i <<endl;
                found=true;
                break;
            }
            else {
                x.append(x);
            }
        }

        if(found == false) cout<<-1<<endl;
    }
   return 0;
}