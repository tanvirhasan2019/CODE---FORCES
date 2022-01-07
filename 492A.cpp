#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n>=1 && n<=3)
    {
        cout<<"1"<<endl;
    }else if(n==4)
    {
        cout<<"2"<<endl;
    }
    else
    {
        vector<int>V;
        V.push_back(1);
        V.push_back(3);
        int sum =4, sum2=4;
        int i=2;
        while(sum2<=n)
        {
            sum =i+1+V[i-1];
            sum2 += sum;
            i++;
            V.push_back(sum);

        }
        if(sum2>=n){
            cout<<V.size()-1<<endl;
        }
        else
        {
            cout<<V.size()<<endl;
        }
    }
}
