/*

Removing Elements(Numbers or characters)
from Sorted Array using stack.

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	stack<int> s,s1;
	s.push(a[0]);//Pushing 1st elements to stack.
	for(i=1;i<n;i++)
	{
		if(a[i]!=s.top())
		{
		   s.push(a[i]);
	    }
	}
	//cout<<s.size();//Printing stack size.
	while(!s.empty())
	{
		k=s.top();
		s1.push(k);
		s.pop();
//        cout<<s.top();
//        s.pop();
	}
	
	//Using extra stack.
	while(!s1.empty())
	{
        cout<<s1.top();
        s1.pop();
	}
	

	return 0;
}
