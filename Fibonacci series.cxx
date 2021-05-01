#include<iostream>
using namespace std;
int main()
{
	int i,n,a=0,b=1,c;
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(i=2;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
	}
	return 0;
}