#include<iostream>
using namespace std;

int main()
{
    long long int t, input[3], result[3], Maxnum =0;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>input[0];
        cin>>input[1];
        cin>>input[2];
        for(int j=0; j<3; j++)
        {
            if(input[j]>=Maxnum)
            {
                Maxnum = input[j];
            }
        }

        if(Maxnum == 0)
        {
            result[0] = 1;
            result[1] = 1;
            result[2] = 1;

        }else{
             for(int k=0; k<3; k++)
             {
                 if(input[k] == Maxnum)
                 {
                     result[k] = 0;

                 }
                 else{
                     result[k] = Maxnum - input[k] + 1;
                 }
             }
        }

        for(int k=0; k<3; k++)
        {
           cout<<" "<<result[k];
        }
        cout<<""<<endl;
        Maxnum = 0;

    }

}
