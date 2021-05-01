#include <iostream>
using namespace std;
class comparison
{
  public:
	float a, b, c;
	void search();
};
void comparison::search()
{
	cout << "enter first number ";
	cin >> a;
	cout << "enter second number ";
	cin >> b;
	cout << "enter third number ";
	cin >> c;
	if (a > b && a > c)
	{
		cout << "first no. is greater than second and third";
	}

	else if (b > c && b > a)
	{
		cout << "second no. is greater than first and third ";
	}

	else if (c > a && c > b)
	{
		cout << "third no. is greater than first and second";
	}
	else
	{
		cout << "All are equal";
	}
}
void main()
{
	comparison obj;
	obj.search();
}