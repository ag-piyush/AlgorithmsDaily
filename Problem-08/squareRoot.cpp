
/*
Author : Piyush Agarwal
College : BITS Pilani, K.K. Birla Goa Campus
Year/Department : 3rd Year/Electronics and Instrumentation Engineering
E-Mail Id : piyush.ag.bitsg@gmail.com
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int p;
	cin>>n>>p;

	int L=0,R=n;
	double ans;

	//Using Binary Search calculating the integer part of square root
	while(R>=L)
	{
		int m=(L+R)/2; 
		if (m*m==n)
		{ 
			ans=m; 
			break; 
		} 
		if (m*m<n)
		{ 
			L=m+1; 
			ans=m; 
		} 
		else
		{ 
			R=m-1; 
		}
	}

	//Iteratively adding precision to the integer value found above
	double inc=0.1; 
	for (int i=0;i<p;i++)
	{ 
		while(ans*ans<=n)
		{ 
			ans+=inc; 
		} 
		ans=ans-inc; 
		inc=inc/10; 
	} 
	cout<<ans<<endl;

}
