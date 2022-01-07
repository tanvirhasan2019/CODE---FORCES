#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i=0, j=0, x1, x2;
    cin>>t;
    while(t--)
    {
        cin>>x1>>x2;
        if(x1>x2)
        {
            i++;
        }else if(x1<x2)
        {
            j++;
        }else
        {
            i++;
            j++;
        }
    }
    if(i>j)
    {
        cout<<"Mishka"<<endl;
    }
    if(i==j)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    if(i<j)
    {
        cout<<"Chris"<<endl;
    }
    return 0;
}
