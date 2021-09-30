#include<iostream>
#include <vector>

using namespace std;
int main(){

 string name;
 cin>>name;
 vector<char>str;
 for(int i=0; i<name.size(); i++)
 {
     str.push_back(name.at(i));
 }

 for(int i=0; i<name.size(); i++)
 {
     int count1 = 0;
     int index=0;
     for(int j=0; j<str.size(); j++)
     {

       if(name.at(i) == str[j])
       {
           count1 += 1;
           if(count1 > 1){
             str.erase(str.begin() + j);
           }
       }
     }

 }

 if(str.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
 else cout<<"IGNORE HIM!"<<endl;
 //cout<<"after deletion size is"<<str.size()<<endl;


}
