#include <iostream>
using namespace std;
class laptop
{
  public:
	string name;
	string brand;
	float price;
	void getdata();
	void showdata();
};

	void laptop::getdata()
	{
		cout<<"Name : ";
		cin >> name;
		cout<<"Brand : ";
		cin >> brand;
		cout<<"Price : ";
		cin >> price;
	}

	void laptop::showdata()
	{
		cout << name;
		cout << endl<<brand;
		cout << endl<<price;
	}

void main()
{
	laptop laptop1;
	laptop1.getdata();
	laptop1.showdata();
}