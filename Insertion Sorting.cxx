#include<iostream>
using namespace std;
void main()
{
	int arr[10],n,temp,i,j;
	cin>>n;
	for(i=0 ;i<n ; i++)
	{
		cin>>arr[i];
	}
	for(i=1 ; i<n ; i++)
	{
		for(j=i ; j>0 ; j--)
		{
			if(arr[j]<arr[j-1])
			{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
	for(i=0 ; i<n ; i++)
	{
		cout<<arr[i];
	}
}