#include <iostream>
using namespace std;
void main()
{
	float num, deno, ans;
	cin >> num >> deno;
	try
	{
		if (deno == 0)
		{
			throw deno;
		}
		ans = num / deno;
	}

	catch (float ex)
	{
		cout << "Division by Zero is : Infinity";
	}
	cout << ans ;
}