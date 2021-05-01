#include <iostream>
using namespace std;
int main()
{
	int i, n, j;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cout << "* ";
	}
	cout << endl;
	for (i = 1; i <= n - 2; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if(j==1 || j==n)
			{
				cout << "* ";
			}
			else
			{
			cout<<"  ";
			}
		}
		cout << endl;
	}
	for (i = 1; i <= n; i++)
	{
		cout << "* ";
	}

	return 0;
}