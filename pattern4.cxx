#include <iostream>
using namespace std;
int main()
{
	int i, j, n;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j <= n - i)
			{
				cout << " ";
			}

			else
			{
				cout << "*";
			}
		}

		for (j = 2; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}