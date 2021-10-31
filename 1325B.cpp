#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n;
        vector<int>A;
        for(int i=0;i<n; i++)
        {
            cin>>x;
            A.push_back(x);
        }
        sort(A.begin(), A.end());
        for(int i=1; i<A.size(); i++)
        {
            if(A[i-1] == A[i])
            {
                A.erase(A.begin()+i);
                i--;
            }
        }
        cout<<A.size()<<endl;

    }
}
