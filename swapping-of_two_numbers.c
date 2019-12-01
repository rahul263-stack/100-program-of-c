//swaping of two numbers
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter two numbers \n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d b=%d",a,b);
 } 
