#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin>>n;
    int result[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        result[x] = i;
    }
    for(int i=1; i<=n; i++){
        cout<<result[i]<<" ";
    }


}
