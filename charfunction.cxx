#include <iostream>
using namespace std;
char FirstCap(char arr[10], int n)
{
	int i;
	for (i = 1; i <= n; i++)
	{
		if (arr[i]>= 'A' && arr[i] <= 'Z')
		{
			return arr[i];
		}
	}
	
}
int main()
{
	int n=10,i;
	char arr[n];
	for (i = 1; i <= n; i++)
	{
		cin >>arr[i];
	}
	cout<<FirstCap(arr,n);

	return 0;
}
