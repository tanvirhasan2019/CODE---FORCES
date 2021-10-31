#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n , oddSum =0, evenSum = 0;
       cin>>n;
       int A[n];
       for(int i=0; i<n; i++)
       {
           cin>>A[i];
           if(A[i] == 1){
             oddSum += 1;
           }else{
             evenSum += 2;
           }

       }

       if(n%2 != 0 && evenSum == 0){
         cout<<"NO"<<endl;
       }
       else{
         if((oddSum+evenSum)%2 == 0)
         {

             cout<<"YES"<<endl;
         }else{
           cout<<"NO"<<endl;
         }
       }
    }
}
