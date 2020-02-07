/*

Given array of elements
print whose frequency is 
k times.

Hint:-- auto works on online platform.

*/
#include<bits/stdc++.h>

using namespace std;

void kthTimesElements(vector<int> v,int k)
{
	int i;
	map <int,int>m;
    int s=v.size();
    for(i=0;i<s;i++)
    {
    	m[v[i]]++;
	}
	
	for(auto it : m)
	{
		if(it.second==k)
		{
		  cout<<(it.first);
	    }
	}
}

int main()
{
	vector<int>v;
	int i,n,x,k;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	{   
	    cin>>x;
		v.push_back(x);
	}
	
	kthTimesElements(v,k);  //vector pass and k in function.
	
	
}
