#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50], s2[50];
	printf("enter string s1");
	gets(s1);
	printf("enter string s2");
	gets(s2);
	if(strstr(s1,s2))
	printf("%s is found in %s", s2,s1);
	else
	printf("%s is not found in %s",s2,s1);
}
