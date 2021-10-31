#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<long long int>arr;
        for(long long int i=0; i<k; i++)
        {
            long long int input;
            cin>>input;
            arr.push_back(input);
        }
        sort(arr.begin(), arr.end());
        long long int cnt = 0;
        long long int CatMove = 0;
        while(!arr.empty())
        {
            arr[arr.size()-1] += 1;
            if(arr[arr.size()-1] == n)
            {
                arr.pop_back();
                cnt++;
            }
            CatMove  += 1;
            for(long long int j=0; j<arr.size(); j++)
            {
                if(CatMove == arr[j])
                {
                  arr.erase(arr.begin());
                  j--;
                }else{
                  break;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
