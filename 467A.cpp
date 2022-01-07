#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    int i, result = 0;
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        if((b-a-2)>=0){
            result++;
        }
    }
    cout<<result;
}
