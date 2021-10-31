#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
   // string ans[input];
    for(int i=0; i<input; i++)
    {
        string x;
        cin>>x;
        if(x.size() >10)
        {


             string temp;
             temp.append(1, x.at(0));
             temp +=to_string(x.size()-2);
             temp.append(1, x.at(x.size()-1));
             cout<<temp<<endl;
        }else{
          cout<<x<<endl;
        }

    }
}
