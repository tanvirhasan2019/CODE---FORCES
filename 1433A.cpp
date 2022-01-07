#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, j;
    cin>>t;

    int A[9][4];
    int X=10;
    for(i=1; i<=9; i++)
    {
        for(j=1; j<=4; j++)
        {
            if(j==1)
            {
                A[i-1][j-1] = i;
            }
            else
            {
                A[i-1][j-1] = i*X+A[i-1][j-2];
                X = X*10;
            }
        }
        X=10;
    }


    while(t--)
    {
        int n;
        cin>>n;
        int cnt = 0;
        bool found =  false;
        i=0, j=0;
        while(found != true)
        {
            if(A[i][j]==n)
            {
                found = true;
            }
            if(j==4)
            {
                i=i+1;
                j=0;
            }
            cnt += (j+1);
            j++;
        }
        cout<<cnt<<endl;
    }
}
