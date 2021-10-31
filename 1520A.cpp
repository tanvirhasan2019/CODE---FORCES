#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<char>A;
        for(int i=0; i<n; i++)
        {
            char x ;
            cin>>x;
            if(i==0)
            {
                A.push_back(x);
            }
            else
            {
                if(A[A.size()-1] != x)
                {
                    A.push_back(x);
                }
            }
        }
        if(n == 1 )
        {
            cout<<"YES"<<endl;
        }
        else
        {
            int trv = 0;
            for(int i=0; i<A.size()-1; i++)
            {
                for(int j=i+1; j<A.size(); j++)
                {
                    if(A[i] == A[j])
                    {
                        trv++;
                        break;
                    }
                }
            }
            if(trv > 0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }

        }
    }
}
