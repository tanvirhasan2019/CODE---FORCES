#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int data[n];
    int result =0;

    for(int i=0; i<n; i++)
    {
        cin>>data[i];
        if(i < k && data[i] > 0 ){
          result +=1;
        }
        if(i == k && data[i-1] == data[i] && data[i]>0){
            result +=1;
            k++;
        }

    }
    cout<<result<<endl;

}
