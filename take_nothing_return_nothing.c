#include<stdio.h>
#include<conio.h>
 main()
 {
 	void add(void);
 	add();
 }
 void add()
 {
 	int a,b,c;
 	printf(" \nEnter two number\n");
 	scanf("%d%d",&a,&b);
 	c=a+b;
 	printf("\n Sum is %d",c);
 }
