#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    string s;
    cin>>n>>s;
    int a=0, d=0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'A')
        {
            a+=1;
        }else if(s[i] == 'D')
        {
            d+=1;
        }
    }
    if(a>d)
    {
        cout<<"Anton"<<endl;
    }
    else if(d>a)
    {
        cout<<"Danik"<<endl;
    }else
    {
        cout<<"Friendship"<<endl;
    }
}
