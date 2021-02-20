#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{

    int n, x1, x2, x3;
    cin>>n;
    int result =0;
    for(int i=0; i<n; i++)
    {
        cin>>x1>>x2>>x3;
        if(x1+x2+x3>=2){
            result +=1;
        }
    }
    cout<<result<<endl;

}
