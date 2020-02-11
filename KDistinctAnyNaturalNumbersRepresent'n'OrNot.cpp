/*

Given a number 'n' and k.
Wap to find if k(Any Natural Number)
distinct number represent n or not.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k,x;
   cin>>n;
   cin>>k;
   x=(k*(k+1))/2;
   if(x<n)
     {
   	    cout<<"Yes"<<endl;
     }
   else
     {
   	    cout<<"Not"<<endl;
     }
}
