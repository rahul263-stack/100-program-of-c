#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("enter string");
	gets(a);
	printf("string in lower case is %s\n",strlwr(a));
}
