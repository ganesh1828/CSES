//Ganesh Kandepalli
#include <iostream>
#define int long long

using namespace std;

void prime_factors(int n)
{
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			int cnt=0;
			while(n%i==0)
			{
				cnt++;
				n/=i;
			}
			cout<<i<<"^"<<cnt<<endl;
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
	prime_factors( n);
}
