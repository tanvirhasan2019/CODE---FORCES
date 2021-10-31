#include<iostream>
using namespace std;

int main()
{
    int n, q;
    cin>>n>>q;
    string A;
    cin>>A;
    while(q--)
    {
        int a, b;
        cin>>a>>b;

        int cnt = 0;
        for(int i=a-1; i<=b-1; i++)
        {
            if(A.at(i) == 'a')
            {
                cnt++;
            }
            else if(A.at(i) == 'b')
            {
                cnt += 2;
            }
            else if(A.at(i) == 'c')
            {
                cnt +=3;
            }

            else if(A.at(i) == 'd')
            {
                cnt += 4;
            }
            else if(A.at(i) == 'e')
            {
                cnt += 5;
            }
            else if(A.at(i) == 'f')
            {
                cnt +=6;
            }

            else if(A.at(i) == 'g')
            {
                cnt+=7;
            }
            else if(A.at(i) == 'h')
            {
                cnt += 8;
            }
            else if(A.at(i) == 'i')
            {
                cnt +=9;
            }

            else  if(A.at(i) == 'j')
            {
                cnt+=10;
            }
            else  if(A.at(i) == 'k')
            {
                cnt += 11;
            }
            else  if(A.at(i) == 'l')
            {
                cnt +=12;
            }

            else if(A.at(i) == 'm')
            {
                cnt +=13;
            }
            else if(A.at(i) == 'n')
            {
                cnt +=14;
            }

            else if(A.at(i) == 'o')
            {
                cnt +=15;
            }

            else if(A.at(i) == 'p')
            {
                cnt +=16;
            }
            else if(A.at(i) == 'q')
            {
                cnt +=17;
            }

            else if(A.at(i) == 'r')
            {
                cnt +=18;
            }

            else  if(A.at(i) == 's')
            {
                cnt +=19;
            }
            else if(A.at(i) == 't')
            {
                cnt +=20;
            }

            else if(A.at(i) == 'u')
            {
                cnt +=21;
            }

            else if(A.at(i) == 'v')
            {
                cnt +=22;
            }

            else if(A.at(i) == 'w')
            {
                cnt +=23;
            }
            else if(A.at(i) == 'x')
            {
                cnt +=24;
            }
            else if(A.at(i) == 'y')
            {
                cnt +=25;
            }
            else if(A.at(i) == 'z')
            {
                cnt +=26;
            }
        }
        cout<<cnt<<endl;
    }
}
