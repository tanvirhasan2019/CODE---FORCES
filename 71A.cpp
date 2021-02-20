//#include<bits/stdc++.h>
#include <iostream>
#include <string>
#include <sstream>
//#include <boost/lexical_cast.hpp>

using namespace std;

int main()
{
   std::stringstream SS;
   int test_case;
   string input, output="";
   char first, last;
    //stringstream ss;
   cin>>test_case;
   for(int i=0; i<test_case; i++)
   {
       cin>>input;
       if(input.length()<10){

            first = input.at(0);
            last = input.at(input.length()-1);
            cout<<input<<endl;

         //cout<<"LENGTH IS "<<input.length()<<"  FIRST CHARECTER "<<first<<"LAST CHARECTER "<<last<<endl;
       }else{
            first = input.at(0);
            last = input.at(input.length()-1);
            output.push_back(first);
             //string s=ss.str(10);
            // string temp = to_string(input.length()-2);
           // string str = boost::lexical_cast<string>(input.length()-2);
             //string::std temp=to_string(input.length()-2);
           // output.append(10);
            //output += to_string(input.length()-2);
            //output.push_back(temp);
            //output.push_back(input.length()-2);
            std::string temp = SS.str();

            output.push_back(last);
            cout<<"OUTPUT "<<output<<endl;
          //cout<<"LENGTH IS GREATER 10 "<<input.length()<<"  FIRST CHARECTER "<<first<<"LAST CHARECTER "<<last<<endl;
       }
   }
   return 0;
}
