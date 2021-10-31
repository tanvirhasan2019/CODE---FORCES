#include<iostream>
using namespace std;
int main()
{
    int cash, withdraw=0;
    cin>>cash;
    while(cash !=0)
    {
        if(cash >= 100)
        {
            cash -= 100;
            withdraw += 1;
        }
        else if(cash >= 20 && cash <100)
        {
            cash -= 20;
            withdraw += 1;

        }
        else if(cash >= 10 && cash < 20)
        {
            cash -= 10;
            withdraw += 1;

        }
        else if(cash >= 5 && cash < 10)
        {
            cash -= 5;
            withdraw += 1;

        }
        else if(cash >= 1 && cash < 5)
        {

            cash -= 1;
            withdraw += 1;
        }
    }
    cout<<withdraw;
}
/*
int cash, withdraw;
    cin>>cash;

    withdraw = cash/100;
    int left = cash%100;

    withdraw += left/20;
    left = left%20;

    withdraw += left/10;
    left = left%10;

     withdraw += left/5;
    left = left%5;

     withdraw += left/1;
     left = left%1;

     cout<<withdraw;

     */
