//program to find avg of elements in array
#include<stdio.h>
main()
{
	int i,n,sum=0, avg;
	printf("Enter size of array:- ");
	scanf("%d",&n);
	int a[n];
	printf(" Enter the elements:- \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	
	for(i=0;i<n;i++)
	sum=sum+a[i];
	avg=sum/n;
	printf("avg off elements is %d",avg);
	
	
}
