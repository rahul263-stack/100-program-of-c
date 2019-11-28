#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf("enter principle, Rate of intrest, time:");
	scanf("%d%d%d",&p,&r,&t);
	si=(p*r*t)/100;
	printf("simple intrest = %d",si);
	
}
