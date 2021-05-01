#include <iostream>
using namespace std;
float division(float D, float d)
{
	float div;
	div=D/d;
	return div;
}
int main()
{
	float D,d;
	cin >> D;
	cin >> d;
	cout<<division(D, d);
	return 0;
}
