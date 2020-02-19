/*

The Problem is to "count all the
possible paths" from top left to
bottom right of a m*n matrix with
constraints that,
From each cell you can either move
only to "right or down".

Input  : m=2, n=3
Output :3
Explanation :

(0, 0)-->(0, 1)-->(0, 2)-->(1, 2)
(0, 0)-->(0, 1)-->(1, 1)-->(1, 2)
(0, 0)-->(1, 0)-->(1, 1)-->(1, 2)

*/
#include<bits/stdc++.h>
using namespace std;
int count_Total_Path(int m, int n)
{
	if(m==1 || n==1) return 1;
	return count_Total_Path(m,n-1)+count_Total_Path(m-1,n);
	      /*
		    if diagonal movements are allowed
			+numberOfPaths(m-1, n-1);
		  */ 
}
int main()
{
	int m,n,i,j;
	cin>>m;
	cin>>n;
	int a[m][n];
	for(i=0;i<m;i++)
	   {
	   	for(j=0;j<n;j++)
	   	   {
	   	     cin>>a[i][j];	
		   }
	   }
	   
	   //Matrix print
//	   for(i=0;i<m;i++)
//	   {
//	   	for(j=0;j<n;j++)
//	   	   {
//	   	     cout<<a[i][j]<<" ";	
//		   }
//		   cout<<"\n";
//	   }

	   cout<<count_Total_Path(m, n);
}
