#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%3 == 1 || n%3 == 2) cout<<"First\n";
        else cout<<"Second\n";
    }
   return 0;
}