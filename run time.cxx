#include<iostream>
using namespace std;
class first 
{
	public:
    virtual void show()
	{
		cout<<"Welcome to Virtual Gyans";
	}
};
class second: public first
{
	public:
	void show()
	{
		cout<<"This is Md Irfan";
	}
};
int main()
{
	first *ptr;
	second obj;
	ptr=&obj;
	ptr->show();
	return 0;
}