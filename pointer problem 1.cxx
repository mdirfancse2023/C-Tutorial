#include<iostream>
using namespace std;
void main()
{
	int a = 32, *ptr = &a;
	char c = 'A' , &ch = c;
	
	ch = ch + a;
	*ptr = *ptr + ch;
	
	cout<<a<<","<<ch;
	
}