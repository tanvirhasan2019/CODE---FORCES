#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n, t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==2 || n%2 != 0)
        {
            cout<<"NO"<<endl;
        }
        vector<int>V;
        int sum =0;
        for(int i=2; i<=n; i=i+2)
        {
            sum += i;
        }
        int j=1;
        for(int i=0; i<n/2; i++)
        {
            V.push_back(j);
            j = j+2;
        }

        for(int i=0; i<V.size(); i++)
        {
           // V.push_back(j);
            //j = j+2;
        }

        for(int i=0; i<n; i++)
        {
         //  cout<<" "<<V[i];
        }
    }
}
