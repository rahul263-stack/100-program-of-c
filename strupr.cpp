#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("enter string");
	gets(a);
	printf("string in upper case %s \n",strupr(a));
	
}
