#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>D;
        while(n!=0)
        {
            int d = n%10;
            D.push_back(d);
            n=n/10;
        }
        int x=1;
        for(i=0; i<D.size(); i++)
        {

            D[i] = D[i]*x;
            x=x*10;
        }
        for(i=0; i<D.size(); i++)
        {
            if(D[i] == 0)
            {
                D.erase(D.begin()+i);
                i--;
            }
        }

        cout<<D.size()<<endl;
        for(i=0; i<D.size(); i++)
        {
            cout<<D[i]<<" ";
        }
        cout<<""<<endl;
    }
}
