#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
   // I hate that I love that I hate it
    string arra[2]={"I hate", "I love"};
    string join1 = "that";
    string end1 = "it";
    string space = " ";
    string output = "";
    int index = 0;

    int input;
    cin>>input;
    if(input == 1){
        cout<<"I hate it"<<endl;
    }else
    {
       for(int i=0; i<input; i++)
       {
         // cout<<arra[i]<<endl;
          if(index == 2){
            index=0;
          }
          output +=arra[index];
          output +=space;

          if(i != (input - 1) )
          {

            output +=join1;
            output +=space;
          }
          index++;

       }
        output +=end1;
        cout<<output<<endl;
    }


}
