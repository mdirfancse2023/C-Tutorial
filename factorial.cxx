#include<iostream>
using namespace std;
int main()
{
	int i,n,ans=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		ans*=i;
	}
	cout<<n<<"! = "<<ans;
	return 0;
}