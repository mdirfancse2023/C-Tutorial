#include <iostream>
using namespace std;
void pow(int n,int p)
{
	int ans=1,i;
	for (i = 1; i <= p; i++)
	{
		ans = ans * n;
	}
	cout << ans;
}
int main()
{
	int n, p;
	cin >> n;
	cin >> p;
	pow(n,p);
	return 0;
}