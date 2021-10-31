#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int a, b, c, d, n;
        cin>>a>>b>>c>>d;
        if(a==b && b==c)
        {
            cout<<"0"<<endl;
        }else
        {
            vector<long long int>v1, v2;

            if (a < b)
            {
                for( long long int i=a; i<=b; i++)
                {
                    v1.push_back(i);
                }
            }else
            {
                for(long long int i=b; i<=a; i++)
                {
                    v1.push_back(i);
                }
            }

            // c, d
            long long int l = c-1;
            long long int r = c+1;
            v2.push_back(c);
            while(d--)
            {
                v2.push_back(l);
                l--;
                v2.push_back(r);
                r++;
            }

            int isRemove = 0;
            for(long long int j=0; j<v2.size(); j++)
            {
                int x= v2[j];
                for(long long int k=0; k<v1.size(); k++)
                {
                    if(x == v1[k])
                    {
                        v1.erase(v1.begin()+k);
                        k--;
                        isRemove++;
                    }
                }
            }

            if(isRemove == 0)
            {
                cout<<v1.size()-1<<endl;
            }else
            {
                 cout<<v1.size()<<endl;
            }


        }
    }
}
