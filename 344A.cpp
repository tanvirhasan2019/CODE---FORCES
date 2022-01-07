#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, result=1, i;
    cin>>n;
    string magnetPool[n];
    string prev,next;

    for(i=0; i<n; i++)
    {
       cin>>magnetPool[i];
    }
    for(i=1; i<n; i++)
    {
       prev = magnetPool[i-1];
       next = magnetPool[i];
       if(prev[1]!=next[1])
       {
           result++;
       }
    }
    cout<<result;

}
