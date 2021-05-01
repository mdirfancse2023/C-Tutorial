#include <iostream>
using namespace std;
int main()
{
	int n, s, i, v, arr[10];
	cout << "Enter the size of the array";
	cout << endl;
	cin >> n;
	cout << endl;
	cout << "Enter Array Elements";
	cout << endl;
	for (i = 0; i <n; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	cout << "Enter the element position to replace";
	cout << endl;
	cin >> s;
	cout << endl;
	cout << "Enter the element";
	cout << endl;
	cin >> v;
	for (i = n - 1; i >= s - 1; i--)
		arr[i + 1] = arr[i];
	arr[s - 1] = v;
	cout << "Resultant array is";
	cout<<endl;
	for (i = 0; i <=n; i++)
	{
		cout << arr[i]<<" ";
	}
	return 0;
}