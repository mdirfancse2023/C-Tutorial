#include <iostream>
using namespace std;
int main()
{
	float a, n, d, i;
	cout << "First Term ";
	cin >> a;
	cout << "Common Difference ";
	cin >> d;
	cout << "No. of Terms ";
	cin >> n;
	cout << "A.P is ";
	for (i = 1; i <= n; i++)
	{
		cout << a + (i - 1) * d << " ";
	}
	cout << endl
		 << "Sum is ";
	cout << n / 2 * (2 * a + (n - 1) * d) << " ";
	return 0;
}