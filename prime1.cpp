#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t; cin>>t;
	while(t--)
	{
		long long n;cin>>n;
		while(n%2==0)
		{
			cout<<2<<" ";
			n/=2;
		}
		int ok=1;
		for(int i=3; i<=sqrt(n); i+=2)
		{
			while(n%i==0)
			{
				cout<<i<<" ";
				n/=i;
			}
			if(n==1)
				break;
		}
		if(n!=1)
		cout<<n;
		cout<<endl;
	}
}
