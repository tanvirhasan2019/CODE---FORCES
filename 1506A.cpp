#include<stdio.h>
#include <iostream>

using namespace std;


int main()
{

     int64_t t;
     int64_t index_x , index_y;
     int64_t n, m, x, number = 1;
     cin>>t;

     for(int i=0; i<t; i++)
     {
        cin>>n;
        cin>>m;
        cin>>x;

        if(n == m && (x%n==0)){
          cout<<x<<endl;

       }else{
            int64_t row[n][m];
        int64_t col[n][m];

        for(int j=0; j<m; j++)
        {

            for(int k=0; k<n; k++)
            {
                row[k][j] = number;
                number++;
            }
        }
        number = 1;
        //

        for(int j=0; j<n; j++)
        {
            for(int k=0; k<m; k++)
            {
                col[j][k]= number;
                number++;
            }
        }
        number = 1;


       // cout<<"ROW "<<endl;

        for(int j=0; j<n; j++)
        {

            for(int k=0; k<m; k++)
            {
                //cout<<' '<<row[j][k];

                if(row[j][k] == x)
                {
                    index_x = j;
                    index_y = k;
                    break;
                }
            }
           // cout<<endl;
        }


         //cout<<"col "<<endl;


         cout<<col[index_x][index_y]<<endl;

        }


     }
}
