#include<string.h>
#include<stdio.h>
int main()
{
	char s1[20], s2[20];
	printf("Enter string");
	gets (s1);
	strcpy(s2,s1);
	printf("copied string is %s",s2);
}
