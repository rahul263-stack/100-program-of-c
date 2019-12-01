//program to implement array function
#include<stdio.h>
#include<conio.h>
void r(int x)
{
	printf ("%d\t",x);
}
int main()
{
	int a[10],n,i;
	printf("Enter the no. of elements of arrat\t");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<=(n-1);i++)
	{
		r(a[i]);
	}
}
