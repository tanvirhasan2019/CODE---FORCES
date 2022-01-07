#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>A;
    int i;
    for(i=0; i<s.size(); i++)
    {
        if(s[i] != '+')
        {
            A.push_back((int)s[i]-48);
        }
    }
    sort(A.begin(), A.end());
    for(i=0; i<A.size(); i++)
    {
        if(i<A.size()-1)
        {
             cout<<A[i]<<"+";
        }else
        {

            cout<<A[i];
        }
    }
}
