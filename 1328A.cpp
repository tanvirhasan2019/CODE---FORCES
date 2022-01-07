#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int cnt = 0;
        if(a%b==0)
        {
            cout<<"0"<<endl;
        }else
        {
            cout<<abs(2*b-a)<<endl;
        }
       // cout<<cnt<<endl;
    }
}
