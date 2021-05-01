#include<iostream>
using namespace std;
class first 
{
	public:
	float a,b;
	void show(int x , int y)
	{
		a=x,b=y;
		cout<<a+b;
	}
	void show(float x , float y)
	{
		a=x,b=y;
		cout<<a+b;
	}
};
int main()
{
	first obj;
	obj.show(10,20);
	cout<<endl;
	obj.show(10.2f,20.3f);
	return 0;
}