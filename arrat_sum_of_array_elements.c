// program to finnd sum of array element
#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf(" enter the size of array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements\n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for (i=0;i<n;i++)
	sum=sum+a[i];
	printf("sum of array elements is %d",sum);
}
