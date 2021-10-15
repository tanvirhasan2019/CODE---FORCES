#include<iostream>
using namespace std;

int main()
{
    string first = "ABCD";
    string second = "ABECDE";

    for(int i=0; i<first.size(); i++)
    {
        char f = first.at(i);
        for(int j=0; j<second.size(); j++)
        {
            if(f == second.at(j))
            {
                second.erase(j, j+1);
                break;
            }
        }
    }

    cout<<second<<endl;
}
