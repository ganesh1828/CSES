//Ganesh Kandepalli
//Complexity==logn
#include <iostream>
#define int long long

using namespace std;
int prime_fact[100001];
#define max 100001
void seive_prime_factors(int n)
{
	for(int i=1;i<max;i++)prime_fact[i]=-1;
	for(int i=2;i<=n;i++)
	{
		if(prime_fact[i]==-1)
		{
			prime_fact[i]=i;
			for(int j=i;j<max;j+=i)
			{
				if(prime_fact[j]!=-1)
				{
					prime_fact[j]=i;
				}
			}
		}
	}
	if(n>1)
	{
		cout<<n<<"^"<<1<<endl;
	}
}
signed main()
{
	int n;
	cin>>n;
	seive_prime_factors(n);
}
