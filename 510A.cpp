#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;

    int m, n;
    cin>>m>>n;
    bool toogle = false;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i%2 != 0)
            {
                cout<<"#";
            }
            else
            {
                if(toogle==false)
                {
                    if(j==n)
                    {
                        cout<<"#";
                    }else
                    {
                        cout<<".";
                    }
                }else
                {
                    if(j==1)
                    {
                        cout<<"#";
                    }else
                    {
                        cout<<".";
                    }
                }
            }
        }
        if(i%2==0)
        {
            toogle = !toogle;
        }
        cout<<""<<endl;
    }
    return 0;
}
