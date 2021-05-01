#include<iostream.h>
#include<conio.h>
class copycons
{
	public:
	copycons(int &x, int &y);
};
copycons::copycons(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<x-y;
	cout<<endl;
}
void main()
{
	clrscr();
	int a,b;
	cin>>a>>b;
	copycons obj(a,b);
	getch();
	cout<<a-b;
}
	