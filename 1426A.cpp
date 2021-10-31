#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, x;
        cin>>n>>x;
        if(n<=2)
        {
            cout<<"1"<<endl;
        }else
        {
            int level = 1, x1 = 2 ;
            while(x1 < n)
            {
                  x1 += x;
                  level++;
            }
            cout<<level<<endl;
        }
    }
}
