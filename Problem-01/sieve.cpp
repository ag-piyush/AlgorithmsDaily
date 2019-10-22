
/*
Author : Piyush Agarwal
College : BITS Pilani, K.K. Birla Goa Campus
Year/Department : 3rd Year/Electronics and Instrumentation Engineering
E-Mail Id : piyush.ag.bitsg@gmail.com
*/

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n;
	cin>>n;

	bool prime[n+1];				
	memset(prime, true, sizeof(prime));		//Initializing array as true that is number at every index is prime

	//We need to set value at every non prime (index + 1) as false 

	for (int i=2;i*i<=n;i++) 
	{  
		if (prime[i] == true) 
		{ 
			//Marking all the multiples of prime number as false i.e. not a prime number
			for (int j=i*i;j<=n;j+=i) 
				prime[j] = false; 
		} 
	} 

	for (int i=2; i<=n; i++) 
	if (prime[i]) 
		cout<<i<<" ";
	cout<<endl;

	return 0; 
} 
