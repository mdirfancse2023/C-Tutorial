#include <iostream>
using namespace std;
void main()
{
	int arr[10], n, i, j, temp, min;
	cout << "No. of Elements : ";
	cin >> n;
	cout << "Type Elements" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Unsorted Array" << endl;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;
	}
	cout << endl
		 << "Sorted Array" << endl;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}