#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
   int itr=0, t, s;
   bool loop=false;
   cin>>t;
   string str;
   vector<int>Ans;
   for(int j=0; j<t; j++)
   {
       cin>>s;
       cin>>str;
       while(!loop)
       {
           loop=true;
           for(int i=1; i<s; i++)
           {
               if(str.at(i-1)=='A' && str.at(i)=='P')
               {
                   str.at(i)='A';
                   loop=false;
                   i++;
               }

           }
           itr++;

       }

       Ans.push_back(itr-1);
       itr=0;
       loop=false;
   }
   for(int i=0; i<Ans.size(); i++)
   {

       cout<<Ans[i]<<endl;
   }
}
