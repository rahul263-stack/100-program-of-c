#include<string.h>
#include<stdio.h>
int main()
{
	char s1[30],s2[30];
	printf("enter string");
	gets(s1);
	int n;
	printf("enter value for n");
	scanf("%d",&n);
	strncpy(s1,s2,n);
	printf("copied string in %s",s2);
}
