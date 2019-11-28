#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[50];
	printf("enter string s1");
	gets(s1);
	printf("enter string s2");
	gets(s2);
	strcat(s1,s2);
	printf("concated string is %s",s1)
}
