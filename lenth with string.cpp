#include<stdio.h>
int main()
{
	char s[20];
	int i, length=0;
	printf("enter string");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		length++;
		
	}
	printf("length of string is %d\t", length);
	
}
