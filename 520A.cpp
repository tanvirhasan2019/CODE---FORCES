#include<iostream>
#include<vector>
#include <cctype>

using namespace std;
//vector<int>Alpha;
int Alpha[26];

void checkFunc(char c)
{
    if(c == 'A' || 'a'){
        Alpha[0] = 1;
    }
    if(c == 'B' || 'b')
    {
        Alpha[1] = 1;
    }
    if(c == 'C' || 'c')
    {
        Alpha[2] = 1;
    }
    if(c == 'D' || 'd')
    {
        Alpha[3] = 1;

    }
    if(c == 'E' || 'e')
    {
        Alpha[4] = 1;
    }
    if(c == 'F' || 'f')
    {
        Alpha[5] = 1;
    }
    if(c == 'G' || 'g')
    {
        Alpha[6] = 1;
    }
    if(c == 'H' || 'h')
    {
        Alpha[7] = 1;
    }
    if(c == 'I' || 'i')
    {
        Alpha[8] = 1;
    }
    if(c == 'J' || 'j')
    {
        Alpha[9] = 1;
    }
    if(c == 'K' || 'k')
    {
        Alpha[10] = 1;
    }
    if(c == 'L' || 'l')
    {
        Alpha[11] = 1;
    }
    if(c == 'M' || 'm')
    {
        Alpha[12] = 1;
    }
    if(c == 'N' || 'n')
    {
        Alpha[13] = 1;
    }
    if(c == 'O' || 'o')
    {
        Alpha[14] = 1;

    }
    if(c == 'P' || 'p')
    {
        Alpha[15] = 1;
    }
    if(c == 'Q' || 'q')
    {
        Alpha[16] = 1;
    }
    if(c == 'R' || 'r')
    {
        Alpha[17] = 1;
    }
    if(c == 'S' || 's')
    {
        Alpha[18] = 1;
    }
    if(c == 'T' || 't')
    {
        Alpha[19] = 1;
    }
    if(c == 'U' || 'u')
    {
        Alpha[20] = 1;
    }
    else if(c == 'V' || 'v')
    {
        Alpha[21] = 1;
    }
    if(c == 'W' || 'w')
    {
        Alpha[22] = 1;
    }
    if(c == 'X' || 'x')
    {
        Alpha[23] = 1;
    }
    if(c == 'Y' || 'y')
    {
        Alpha[24] = 1;
    }
    if(c == 'Z' || 'z'){
        Alpha[25] = 1;
    }
}
int main()
{
   for(int i=0; i<26; i++)
   {
      Alpha[i] = 0;
   }

   int n;
   cin>>n;
   for(int i=0; i<n; i++)
   {
       char c ;
       cin>>c;
       checkFunc(c);
   }
   int sm = 0;
   for(int i=0; i<26; i++)
   {
       sm += Alpha[i];
       //cout<<" "<<Alpha[i];
   }
   if(sm == 25)
   {
       cout<<"YES"<<endl;
   }else{
       cout<<"NO"<<endl;
   }


}
