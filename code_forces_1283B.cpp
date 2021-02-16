#include<stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main()
{
 int t;
 double n, k, sum=0, x, temp, temp1;
 cin>>t;
 vector<double>Summ;

 for(int i=0; i<t; i++)
 {
     cin>>n>>k;
     x=floor(k/2);
     temp=ceil(n/k);
     for(int j=0; j<x; j++)
     {
         sum +=temp;
     }
     if(k-x>=0)
     {
         x=k-x;
     }
     else
     {
         x=x-k;
     }
     temp1=floor(n/k);

     for(int j=0; j<x; j++)
     {
         sum +=temp1;
     }
     Summ.push_back(sum);
     sum=0;

 }

 for(int i=0; i<Summ.size(); i++)
 {
     cout<<Summ[i]<<endl;
 }
}
