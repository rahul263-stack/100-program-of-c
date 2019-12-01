// take something return nothing
#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	void add(int , int ); //we have to declare that input is integers
	printf("enter two numbers");
	scanf("%d%d",&x,&y);
	add(x,y);//actual arguments/call function/call by value
	
}
void add(int a,int b)//formal argument
{
	int c;
	c=a+b;
	printf("sum is %d",c);
}
