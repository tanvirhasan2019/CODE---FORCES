#include<iostream>
using namespace std;
int main()
{
 int n, k, l, c, d, p, nl, np;
 cin>>n>>k>>l>>c>>d>>p>>nl>>np;

 int toast = (k*l)/n;
 int limes = c*d;
 int t_s = p/np;
 int minimum;
 if(toast <= limes && toast <= t_s)
 {
     minimum = toast;
 }
 else if(limes <= toast && limes <= t_s)
 {
     minimum = limes;
 }else{
   minimum = t_s;
 }

 cout<<(minimum/n)<<endl;

}
