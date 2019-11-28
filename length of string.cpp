#include<string.h>
#include<stdio.h>
int main()
{
	char a[20],length;
	printf("enter string");
	gets(a);
	length=strlen(a);
	printf("length of string is %d",length);
}
