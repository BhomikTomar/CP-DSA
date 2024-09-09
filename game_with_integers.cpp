#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%3 == 0) cout<<"SECOND\n";
        else cout<<"FIRST\n";
    }
   return 0;
}