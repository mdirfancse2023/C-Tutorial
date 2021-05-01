#include <iostream>
using namespace std;
void pattern()
{
	int n, j, i;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	pattern();
	pattern();
	return 0;
}