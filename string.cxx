//-->S T R I N G<<--

/*
strlen()-->Find length of string
strcpy()-->Copy one string to other
strcat()-->Join two strings
strcmp()-->Compare two strings
strlwr()-->Convert string to lowercase
strupr()-->Convert string to uppercase
*/

//--><string.h><--

#include<iostream>
#include<string.h>
using namespace std;
void main()
{
char s1[10],s2[10];
gets(s1);
gets(s2);
cout<<strcmp(s1,s2);
}