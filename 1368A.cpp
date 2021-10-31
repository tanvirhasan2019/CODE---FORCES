#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, n;
        cin>>a>>b>>n;
        int i=0;
        int mn = min(a, b);
        int mx = max(a, b);
        while(mx <= n)
        {
            mn +=mx;
            i++;
            if(mn>mx)
            {
                swap(mn, mx);
            }
        }
        cout<<i<<endl;
    }
}
