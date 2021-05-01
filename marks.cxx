#include <iostream>
using namespace std;
int main()
{
	string name;
	int roll, hindi, english, maths, science, total;
	cin >> name >> roll >> hindi >> english >> maths >> science;
	total = hindi + english + maths + science;

	if (total >= 320 && total<=400)
		cout << name << " obtained Grade A ";
	else if (total >= 240 && total < 320)
		cout << name << " obtained Grade B ";
	else if (total >= 200 && total < 240)
		cout << name << " obtained Grade C";
	else if (total < 200)
		cout << name << " obtained Grade D ";
	else
		cout << "Marks should not be greater than 400";

	return 0;
}