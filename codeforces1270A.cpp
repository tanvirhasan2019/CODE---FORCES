#include<stdio.h>
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, k1, t, x1, x2;
    cin>>t;
    vector<int>A;
    vector<int>B;
   // vector<string>ans;
    for(int i=0; i<t; i++)
    {

        cin>>n>>k>>k1;
        for(int j=0; j<k; j++)
        {
            cin>>x2;
            A.push_back(x2);
        }
        for(int j=0; j<k1; j++)
        {
            cin>>x1;
            B.push_back(x1);
        }

        int x=*max_element(A.begin(),A.end());
        int y=*max_element(B.begin(), B.end());

        if(x>y)
        {
            cout<<"YES"<<endl;
           // ans.push_back("YES");
        }
        else
        {

             cout<<"NO"<<endl;
            //ans.push_back("NO");
        }
        A.clear();
        B.clear();

    }


}
