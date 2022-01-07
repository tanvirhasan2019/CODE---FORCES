#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int i, cnt = 0;
    for(i=1; i<s.size(); i++)
    {
        if(s[i-1] == s[i])
        {
            cnt++;
        }
    }
    cout<<cnt;
}
