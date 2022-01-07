#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[5][5];
    int i,j, x, y;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1)
            {
                x=i+1;
                y=j+1;
            }
        }
    }
    int cnt=0;
    if(x>3)
    {
        cnt += x-3;
    }else
    {
        cnt += 3-x;
    }
    if(y>3)
    {
        cnt += y-3;
    }
    else
    {
     cnt += 3-y;
    }
    cout<<cnt<<endl;
}
