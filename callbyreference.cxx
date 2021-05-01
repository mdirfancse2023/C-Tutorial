//Call By Value
//Call By Reference
#include<iostream>
using namespace std;
void swap(int &c,int &d)
{
	int temp;
	temp=c;
	c=d;
	d=temp;
	cout<<"Swap Function: "<<c<<" "<<d<<endl;
}
int main()
{
	int a,b;
	cout<<"Enter The Numbers"<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<"Main Function: "<<a<<" "<<b;
	return 0;
}