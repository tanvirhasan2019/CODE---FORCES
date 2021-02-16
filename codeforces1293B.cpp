#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    double n,x=0;
    cin>>n;
    bool zero=false;
    while(!zero)
    {
        if(n!=0)
        {
            x +=1/n;
            n=n-1;
        }
        if(n<=0)
        {
            zero=true;
        }
    }
    cout<<x;
}
