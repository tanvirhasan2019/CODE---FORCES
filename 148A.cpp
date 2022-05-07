#include<bits/stdc++.h>
using namespace std;

map<int, int>mp;
map<int, int>::iterator itr;

void insertToMap(int r, int d){
    for(int i=r; i<=d; i)
    {
        if(mp[i] == 0){
          mp.insert({i, i});
        }
        i +=r;
    }
}

int main()
{
    int k,l,m, n, d;
    cin>>k>>l>>m>>n>>d;
    insertToMap(k, d);
    insertToMap(l, d);
    insertToMap(m, d);
    insertToMap(n, d);
    cout<<mp.size()<<endl;
}
