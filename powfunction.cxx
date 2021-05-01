#include <iostream>
using namespace std;
void pow()
{
	int n, p, ans=1, i;
	cin >> n;
	cin >> p;
	for (i = 1; i <= p; i++)
	{
		ans = ans * n;
	}
	cout << ans;
}
int main()
{
	pow();
	return 0;
}