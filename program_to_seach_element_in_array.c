//program to search element in c
#include<stdio.h>
int main()
{
	int a[10],n,search,i;
	printf("Enter the no. of elements of arrat\t");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter an element you want to search");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	if(a[i]==search)
	{
		printf("element found at %d position",i+1);
	}
}
