#include<iostream>
using namespace std;
int main()
{
	float a,b,c,d,x,y,z;
	cin>>a>>b>>c;
	d=(b*b)-(4*a*c);
	z=sqrt(d);
	x=(-b+z)/(2*a);
	y=(-b-z)/(2*a);
	if(d>=0)
	{
		cout<<x;
		cout<<y;
	}
	else
	{
		cout<<"Real roots doesn't exists";
	}
	
}