#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;

    getchar();
    getline (cin,str);
    int maxNum = -1;
    int incr = 0;

    for(int i=0; i<str.size(); i++)
    {
        if(isupper(str.at(i)))
        {
            incr++;
        }
        if(str.at(i) == ' ')
        {

            if(incr>=maxNum)
            {
                maxNum = incr;
            }
            incr = 0;
        }
        if(i==str.size()-1)
        {
            if(incr>=maxNum)
            {
                maxNum = incr;
            }
        }
    }
    cout<<maxNum<<endl;
}
