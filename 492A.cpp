#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1"<<endl;
    }else
    {
        int sums =0 ;
        int Next = 1;
        int deep =0;

        if(n==2)
        {
            cout<<"2"<<endl;

        }else
        {
          int deep = 0, Next = 3;
          while(n>0)
          {
              int i;
              for(i=1; i<=Next; i++)
              {
                  cout<<" # ";
              }
              cout<<""<<endl;
              Next += i;
              n = n -i;
              deep++;
          }

          cout<<"Deep "<<deep<<endl;
        }

    }

}
