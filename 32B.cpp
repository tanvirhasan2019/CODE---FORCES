#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string ans="";
    for(int i=0; i<s.size(); i++)
    {
        if(s.at(i) == '.' )
        {
            ans +="0";
        }
        if(s.at(i) == '-' && s.at(i+1) == '.')
        {
            ans += "1";
            i = i+1;
        }
        if(s.at(i) == '-' && s.at(i+1) == '-')
        {
            ans += "2";
            i = i+1;
        }
    }

    cout<<ans;
}
