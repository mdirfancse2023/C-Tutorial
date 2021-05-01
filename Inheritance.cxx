#include<iostream>
using namespace std;
class first
{
	public:
	void sum()
	{
		int a=10,b=5;
		cout<<a+b<<endl;
	}
};
class second : public first
{
	public:
	void sub()
	{
		int a=10,b=5;
		cout<<a-b<<endl;
	}
};
class third : public first
{
	public:
	void mul()
	{
	
	int a=10,b=5;
	cout<<a*b;
	}
};
void main()
{
	third obj;
	obj.sum();
	obj.sub();
	obj.mul();
}