#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char A[n][5];
    int found = -1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>A[i][j];
            if(j == 1 && A[i][j] == 'O' && A[i][j-1] == 'O' && found == -1)
            {
                found = 1;
                A[i][j]='+';
                A[i][j-1]='+';

            }

            if(j == 4 && A[i][j] == 'O' && A[i][j-1] == 'O' && found == -1)
            {
                found = 1;
                A[i][j]='+';
                A[i][j-1]='+';
            }
        }
    }
    if(found == -1)
    {
        cout<<"NO"<<endl;
    }else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<5; j++)
            {
                cout<<A[i][j];
            }
            cout<<""<<endl;
        }
    }

}
