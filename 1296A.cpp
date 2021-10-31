#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n];
        int sums = 0, oDD= 0, eVen =0;
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
            if(A[i]%2==0)
            {
             eVen++;
            }else{
                oDD++;
            }
            sums += A[i];
        }
        if(sums % 2 ==0)
        {
            if(oDD != 0 && eVen !=0)
            {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }else{
          cout<<"YES"<<endl;
        }
    }
}
