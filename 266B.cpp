#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;
    string x;
    cin>>x;
    //int pos=0;
    int Trav [n];
    for(int i=0; i<n; i++)
    {
        Trav[i] = 0;
    }
    for(int i=0; i<n-1; i++)
    {
       if(x[i] == 'B' && Trav[i] == 0)
       {
           if(i+t<n && x[i+t] == 'G')
           {
               swap(x[i], x[i+t]);
               Trav[i+t]= 1;

           }
           else if(i==n-2)
           {
               swap(x[i], x[i+1]);
               Trav[i+1]= 1;
           }
           cout<<""<<endl;
       }
    }
    cout<<x<<endl;
}
