#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string arr;
        cin>>arr;

        int i =0;
        int j=n-1;
        int rem = n;
        while(i<j){
            if(arr[i]==arr[j]){
                break;
            }
            else{
                rem-=2;
                i++;
                j--;
            }
        }
        cout<<rem<<endl;
    }
    return 0;
}