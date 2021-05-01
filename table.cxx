#include <iostream>
using namespace std;
int main()
{
	int i, n;
	cout << "enter the value of the 	n for which you wants to print table"<<endl;
	cin >> n;
	for (i = 1; i <= 10; i++)
	{
		cout << n << "×" << i << "=" << n * i << endl;
	}
	return 0;
}