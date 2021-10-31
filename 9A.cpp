#include<iostream>
using namespace std;
int main()
{
    int Y, W, maxNum;
    cin>>Y>>W;
    if(Y>=W)
    {
        maxNum = Y;
    }else
    {
         maxNum = W;
    }
    int diff = 6 -  maxNum + 1;
    int ups = diff , downs = 6;

     if( ups % 2 == 0)
     {
         while( ups % 2 == 0 && downs % 2 == 0)
         {
              ups = ups / 2;
              downs  = downs / 2;
         }

     }
     if( downs % ups == 0)
     {
         downs = downs / ups;
         ups = 1;
     }

    cout<<ups<<"/"<<downs<<endl;

}
