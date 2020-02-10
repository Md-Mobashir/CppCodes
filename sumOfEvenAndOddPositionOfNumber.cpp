/*

Given a s="1001247654";
sum of even position=15
sum of odd position=15

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int i,x=0,sum1=0,sum2=0;
	x=s.length();
	for(i=0;i<x;i++)
	{
		//Even Position digit sum.
		if(i%2==0)
		{
			sum1=sum1+(s[i]-'0');
		}
		//Odd position digit sum.
		else
		{
			sum2=sum2+(s[i]-'0');
		}
	}
	cout<<"EvenPositionSum="<<sum1<<'\n'<<"OddPositionSum="<<sum2;
}
