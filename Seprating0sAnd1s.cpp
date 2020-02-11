/* This is also called segregation 
   of 0s and 1s.
*/
/*
Method 1:---
count no of 0s let us c.
put/fill array 1st c position
with 0s and remaing n-c with 1s.

Method 2:---

 
Given 
Input :-
a=[0,0,1,1,0,0,1]

Output:-
[0,0,0,0,1,1,1]
      OR
[1,1,1,0,0,0,0]

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j,temp;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	   {
		 for(j=0;j<n-1;j++)
		    {
		 	   if(a[j]>a[j+1])
		 	   /* for decreasing order just use
				  if(a[j]<a[j+1]).
			   */
		 	   {
		 	        temp=a[j];
				    a[j]=a[j+1];
					a[j+1]=temp;	
			   }
		    }
	   }
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
}
