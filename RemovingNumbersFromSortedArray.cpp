/*

Removing duplicate elements from
sorted array using extra space.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k=0;
	cin>>n;
	int a[n],b[n]={0};
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	for(i=0;i<n-1;i++)
        {
			if(a[i]!=a[i+1])
			{
				b[k]=a[i];
				k++;
			}
		}
    b[k]=a[n-1]; //Adding last element 
	for(i=0;i<=k;i++)
	{
	   cout<<b[i];
	}
	
	return 0;
}
