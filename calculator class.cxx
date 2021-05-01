#include <iostream>
using namespace std;
class operation
{
	public:
	void calc();
};
void operation::calc()
{
	int l,m;
	char i;
	cout << "Give two numbers in which you wish to porform operations" << endl;
	cin >> l >> m;
	cout << "Type A for Addition, S for Subtraction, M for Multiplication, D for Division,      R for Remainder" << endl;
	cin >> i;
	switch (i)
	{
	case 'A':
		cout << l + m;
		break;
	case 'S':
		cout << l - m;
		break;
	case 'M':
		cout << l * m;
		break;
	case 'D':
		cout << l / m;
		break;
	case 'R':
		cout << l % m;
		break;
	default:
		cout << "Invalid Input";
	}
}
void main()
{
	operation obj;
	obj.calc();
}
