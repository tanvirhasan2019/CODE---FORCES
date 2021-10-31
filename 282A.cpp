#include<iostream>
using namespace std;
int main()
{
    int input;
    cin>>input;
    int x=0;

    for(int i=0; i<input; i++)
    {
        string bits;
        cin>>bits;
        for(int j=0; j<bits.size(); j++)
        {
            if(bits.at(j) == '+')
            {
                x +=1;
                break;
            }
            if(bits.at(j) == '-')
            {
                x -=1;
                break;
            }
        }
    }
    cout<<x<<endl;

}

