#include <cctype>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string input;
    cin>>input;
    int upper =0, lower=0;
    for(int i = 0; i<input.size(); i++)
    {
        if(isupper(input.at(i)))
        {
           upper += 1;
        }else
        {
           lower += 1;
        }
    }
    if(upper>lower)
    {
        for (int i=0; i<input.size(); i++)
        {
            input[i]=toupper(input.at(i));
        }
    }
    if(lower>=upper)
    {
        for (int i=0; i<input.size(); i++)
        {
            input[i]=tolower(input.at(i));
        }
    }
    cout<<input<<endl;
    return 0;
}
