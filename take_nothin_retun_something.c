//take nothing return something
#include<stdio.h>
#include<conio.h> 
int add(void);
void main()
{  int s;
	s=add();
	printf("sum is %d",s);
}
int add()
{
	int a,b,c;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	return(c);
}
