
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
	cin>>n;
	int arr[n-1];
	for(int i=0;i<n-1;i++)
		cin>>arr[i];

	//Using Binary Search (Works in O(logN) complexity)

	int l=0;
	int r=n-1;
	while(l<r)
	{
		int m=(l+r)/2;
		if(arr[m]==m+1)
			l=m+1;
		else
			r=m-1;
	}
	cout<<l+1<<endl;

}
