//program to find greatest elements in array
#include<stdio.h>
main()
{
	int a[4],i,n,g=0;
	printf(" enter the no. of elements of array");
	scanf("%d",&n);
	printf(" Enter the elements in array");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	g=a[0];
	for(i=0;i<n;i++)
	if(a[i]>g)
	g=a[i];
	printf("the largest element in array is %d",g);
}
