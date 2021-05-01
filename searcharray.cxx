#include<iostream>
using namespace std;
int main()
{
	int n,s,i,arr[10];
	cout<<"Enter the size of the array";
	cout<<endl;
	cin>>n;
	cout<<endl;
	cout<<"Enter Array Elements";
	cout<<endl;
	for( i=0; i<n; i++)
	{

		cin>>arr[i];
	}
	cout<<endl;
	cout<<"Enter the element to search";
	cout<<endl;
	cin>>s;
	for( i=0; i<n; i++)
	{
		if(arr[i]==s)
		{
			cout<<"Position of "<<s<<" is "<< i+1;
			break;
		}
		else
		{
			cout<<"not found";
			break;
		}
			
	}
//	if(i==n)
	//	cout<<"Element not found";
	return 0;
}