#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a , b;
    cin>>a>>b;
    if(a.size() == b.size())
    {
        int j=b.size()-1;
        for(int i=0; i<b.size()/2; i++)
        {
            swap(b[i], b[j]);
            j--;
        }
        if(a==b)
        {
            cout<<"YES"<<endl;

        }else
        {
            cout<<"NO"<<endl;
        }

    }else
    {
        cout<<"NO"<<endl;
    }
}
