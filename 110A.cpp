#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<int>V;
    while(n>0)
    {
        V.push_back(n%10);
        n=n/10;
    }
    int cntLucky4 = 0;
    int cntLucky7 = 0;
    for(int i=0; i<V.size(); i++)
    {
        if(V[i] == 4)
        {
            cntLucky4 +=1;
        }
        if(V[i] == 7)
        {
            cntLucky7 +=1;
        }
    }
    if(cntLucky4+cntLucky7 == 4 || cntLucky4+cntLucky7 == 7)
    {
       cout<<"YES"<<endl;
    }else
    {
      cout<<"NO"<<endl;
    }

    return 0;

}
