/*
   Conceept:--->
   Take two pointers i(for 0s) at beginning
   and j(for 1s) at last both move until 
   i<j(loop condition) if a[i]==1
   swap a[i],a[j] then j-- else i++; 
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	   	cin>>a[i];
	}
	i=0;
	j=n-1;
	while(i<j)
	{
		if(a[i]==1)
		{
			int t=a[i];
			 a[i]=a[j];
			 a[j]=t;
			 j--;
		}
		else
		{
		    i++;	
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		
	}
}
