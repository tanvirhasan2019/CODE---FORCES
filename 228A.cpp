#include<iostream>
using namespace std;
int main()
{

    int A[4];
    int maxNum = -1, minNum = INT_MAX, same = 0;
    for(int i=0; i<4; i++)
    {
        cin>>A[i];
        if(A[i]>maxNum)
        {
            maxNum = A[i];
        }
        if(A[i] < minNum)
        {
            minNum = A[i];
        }
    }
    for(int i=1; i<=4; i++)
    {

        if(A[i-1] == A[i])
        {
            same++;
        }
    }
    if(same == 3)
    {

        cout<<(maxNum -4)<<endl;
        //cout<<"7 7 7 7 "<<maxNum<<endl;
    }
    else
    {
        cout<<minNum<<endl;
    }

}
