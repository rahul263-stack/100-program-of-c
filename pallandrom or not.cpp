#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[50];
	printf("enter string");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	int i=strcmp(s1,s2);
	if(i==0)
	printf("string is palindrome");
	else 
	printf("string is not pallandrom");
}
