/*

Given array of elements
print unique elements sum.

Hint:-- auto works on online 
platform. 
*/
#include<bits/stdc++.h>

using namespace std;

int uniqueElementsSum(vector<int> v)
{
	int i,sum1=0;
	map <int,int>m;
    int s=v.size();
    for(i=0;i<s;i++)
    {
    	m[v[i]]++;
	}
	
	for(auto it : m)
	{
		if(it.second==1)
		{
		  sum1=sum1+(it.first);
	    }
	}
	return sum1;
}

int main()
{
	vector<int>v;
	int i,n,x;
	cin>>n;
	for(i=0;i<n;i++)
	{   
	    cin>>x;
		v.push_back(x);
	}
	
	cout<<uniqueElementsSum(v);  //vector pass in function.
	
	
}
