#include<stdio.h>
#include<iostream>
using namespace std;
int Serial(int a, int b)
{

    int i=0;
    while(a!=b)
    {

        if(a<=b)
        {
            i++;
            a +=i;
        }
        if(a>b)
        {
            i=INT_MAX;
            break;
        }

    }
    //cout<<"Serial --"<<i<<endl;
    return i;
}
int Sequence(int a, int b)
{
    int i=0;
    int max_data;
    if(a>b)
    {
      max_data=a-b;
    }
    else
    {
      max_data=b-a;
    }

    while((max_data+1)>i)
    {

       if(a==b)
        {
            break;
        }
        else
        {
           i++;
           a+=i;
           i++;
           b+=i;
        }


       // cout<<"b "<<b<<endl;
    }
    //cout<<"Seq "<<i<<endl;
    return i-1;
}
int main()
{
    int a, b, t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else
        {
            if(a>b)
            {
                int temp=a;
                a=b;
                b=temp;
            }
            int j=Serial(a,b);
            int k=Sequence(a,b);
            int l=Sequence(b,a);

            if(j<k && j<l)
            {
                cout<<j<<endl;
            }
            else if(k<j && k<l)
            {
                cout<<k<<endl;
            }
            else if(l<j && l<k)
            {
                cout<<l<<endl;
            }
            else if(j==k && k==l)
            {
                cout<<j<<endl;
            }else
            {
                cout<<k<<endl;
            }
        }
    }
}
