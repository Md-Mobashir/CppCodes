#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
	int i,f=0;
	for(i=2;i<=sqrt(n);i++)
	{
        if(n%i==0)
		{
		  f=1;
		  break;	
	    }		
	}
	return f;
	
}
int main()
{
	int n;
	cin>>n;
	if(n==2 || n==3)
	{
		cout<<"NumberisPrime";
	}
	else
	{
	  int x=isprime(n);
	  if(x==0)
	  {
	  	cout<<"NumberisPrime";
	  }
	  else
	  {
	  	cout<<"NumberisNotPrime";
	  }
    }
}
