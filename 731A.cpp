#include<bits/stdc++.h>
using namespace std;
char alphabet[26];
int current_position = 0;

int left(char c)
{
     bool found = false;
     int dis=0;
     while(found != true)
     {
         if(current_position == -1)
         {
             current_position = 25;
         }
         if(alphabet[current_position] == c)
         {
             found = true;
         }
         current_position -= 1;
         dis++;

     }
    return dis;
}

int right(char c)
{
     bool found = false;
     int dis=0;
     while(found != true)
     {
         if(current_position == 26)
         {
             current_position = 0;
         }
         if(alphabet[current_position] == c)
         {
             found = true;
         }
         current_position += 1;
         dis++;
     }
    return dis;
}


int main()
{

    for (int ch = 'a'; ch <= 'z'; ch++)
    {
        alphabet[ch-'a'] = ch;
    }
    string input;
    cin>>input;
    int result = 0;
    for(int i=0; i<input.size(); i++)
    {
        char ch = input.at(i);
        int l =left(ch);
        int r = right(ch);
        result += min(l, r);
    }
    cout<<"Result "<<result<<endl;

}
