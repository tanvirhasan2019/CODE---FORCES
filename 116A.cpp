#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a, b;
    cin>>n;
    int A[n][2];
    for(i=0; i<n; i++)
    {
        cin>>a>>b;
        A[i][0]=a;
        A[i][1]=b;
    }
    int capacity = 0;
    vector<int>V;
    for(i=0; i<n; i++)
    {
        capacity += A[i][1]-A[i][0];
        V.push_back(capacity);

    }
    sort(V.begin(), V.end());
    cout<<V[V.size()-1];


}
