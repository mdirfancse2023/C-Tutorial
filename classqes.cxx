#include<iostream>
using namespace std;
class student
{
	public:
	string name;
	int mathsmark , engmark , total , avg ;
	int read_data()
	{
		cout<<"Enter the name of student"<<endl;
		cin>>name ;
		cout<<"Enter the marks of maths and english"<<endl;
		cin>>mathsmark>>engmark;
	}
	int compute()
	{
		total=mathsmark+engmark;
		avg=total/2;
	}
	int display()
	{
		cout<<"Total is : " <<total<<endl<<"Avg is : "<<avg;
	}
};
int main()
{
	student obj;
	obj.read_data();
	obj.compute();
	obj.display();
	return 0;
}