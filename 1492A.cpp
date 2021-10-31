#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int p,a,b,c,x,y,z;
        cin >> p >>  a >> b >> c;
        if(p%a==0)
        {
            x=0;
        }
        else
        {
            x=a-p%a;
        }
        if(p%b==0)
        {
            y=0;
        }
        else
        {
            y=b-p%b;
        }
        if(p%c==0)
        {
            z=0;
        }
        else
        {
            z=c-p%c;
        }
        cout << min(x,min(y,z)) << endl;
    }
    return 0;
}
