#include<iostream>
using namespace std;
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void main()
{
	int x=10,y=15;
	cout<<x<<" "<<y<<endl;
	swap(x,y);
	cout<<x<<" "<<y;
	
}