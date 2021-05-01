#include <iostream>
using namespace std;
class irfanstyle
{
  public:
	float a, b;
	void calc();
};
void irfanstyle::calc()
{
	cout << "Enter no. a " << endl;
	cin >> a;
	cout << "Enter no. b " << endl;
	cin >> b;
	cout << "Sum of a and b is " << a + b << endl
		 << "Sub of a and b is " << a - b << endl
		 << "Mul of a and b is " << a * b << endl
		 << "Div of a and b is " << a / b;
}
void main()
{
	irfanstyle obj;
	obj.calc();
}