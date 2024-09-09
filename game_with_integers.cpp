#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%3 == 1 || n%3 == 2) cout<<"FIRST\n";
        else cout<<"SECOND\n";
    }
   return 0;
}