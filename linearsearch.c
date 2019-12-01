//program to search an element in an array using linear search
#include<stdio.h>
#include<string.h>
main()
{
	int a[30],n,i,key;
	printf(" Enter no. of elements of array");
	scanf("%d",&n);
	printf(" enter the array elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the key to search");
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			printf("key is found at %d position",i+1);
			break;
		}
	}
	if(i==n)
	printf("key not found");
	
	
}
