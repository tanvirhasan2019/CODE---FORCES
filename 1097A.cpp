#include<iostream>
using namespace std;
int main()
{

    string in1, in2="";
    cin>>in1;
    for(int i=0; i<5; i++)
    {
        string x;
        cin>>x;
        in2 +=x;
    }
    bool possible = false;
    for(int i=0; i<in2.size(); i=i+2)
    {
        if(in2.at(i) == in1.at(0) || in2.at(i+1) == in1.at(1))
        {
            possible = true;
        }
    }
    if(possible == true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }


}
