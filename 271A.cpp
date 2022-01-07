#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, N;
    cin>>n;
    N=n+1;
    bool found = false;
    int D[4];
    int k=1;
    while(found != true)
    {
        for(int i = 0; i<4; i++)
        {
            int d = N%10;
            D[i]=d;
            N=N/10;
        }
        bool uni = true;
        for(int i = 0; i<4; i++)
        {
            for(int j = i+1; j<4; j++)
            {
               if(D[i] == D[j])
               {
                   uni = false;
               }
            }
        }
        if(uni == false)
        {
           N=n+k;
           k++;
        }else
        {

            found = true;
        }
    }

    for(int i=3; i>=0; i--)
    {
      cout<<D[i];
    }
}
