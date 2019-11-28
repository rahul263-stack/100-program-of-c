#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50], s2[50];
	printf("enter string s1");
	gets(s1);
	printf("enter string s2");
	gets(s2);
	int n;
	printf("enter value for n");
	scanf("%d",&n);
	strncmp(s1,s2,n);
	if(strncmp(s1,s1,n)==0)
	printf("string are same upto %d characters",n);
	else 
	printf("string are different");
}
