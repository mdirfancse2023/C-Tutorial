#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k,l;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
	for(k=n-1;k>=1;k--)
	{
		for(l=k;l>=1;l--)
		{
			cout<<"* ";
		}
	
		cout<<endl;
	}
	return 0;
}