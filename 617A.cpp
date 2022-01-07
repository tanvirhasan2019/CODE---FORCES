#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt=0;
    cin>>n;
    while(n>0)
    {
        n=n-5;
        cnt++;
    }
    cout<<cnt;
}
