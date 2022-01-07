#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b;
    cin>>a>>b;
    int cnt=0;
    bool ans = false;
    while(ans != true)
    {
        cnt++;
        a=a*3;
        b=b*2;
        if(a>b)
        {
            ans =  true;
        }

    }
    cout<<cnt;
}
