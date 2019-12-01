//progrma to find smallest no.
#include<stdio.h>
#include<string.h>
main()
{
	int a[30],i,n,s=0;
	print("enter the size of array");
	scanf("%d",&n);
	printf(" enter the elements of array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	s=a[0];
	for(i=0;i<n;i++)
	if(a[i]<s)
	s=a[i];
	printf("smallest element in array is %d",s);
	}

