#include <iostream>
using namespace std;
bool isprime(int n)
{
	int i;
	for (i = 2; i < n; i++)
	{
		if ((n % i) == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	cin >> n;
	if(isprime(n))
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not prime";
	}
	return 0;
}
