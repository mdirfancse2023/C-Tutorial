#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	cout<<"Even no. is ";
	for( i=0 ; i<=n ; i++)
	{
		if(i%2!=0)
		{
		cout<<i<<" ";
		}
	}
	return 0;
}