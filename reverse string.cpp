#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	printf("enter string");
	gets(s);
	printf("string is %s",s);
	strrev(s);
	printf("reverse string is %s", s);
}
