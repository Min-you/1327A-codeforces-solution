 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k;
		cin>>n>>k;
		if(n%2==1)
		{
			if(k%2==0)
				cout<<"NO\n";
			else
			{
				ll val=k*k;
				if(n>=val)
					cout<<"YES\n";
				else
					cout<<"NO\n";
			}
		}
		else
		{
			if(k%2==1)
				cout<<"NO\n";
			else
			{
				ll val=k*(k);
				if(n>=val)
					cout<<"YES\n";
				else
					cout<<"NO\n";

			}
		}
	}
}
 