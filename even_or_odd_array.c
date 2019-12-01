//program to find the elements are even or odd
#include<stdio.h>
int main()
{
	int n,i,a[50];
	printf(" Enter the size of array\n");
	scanf("%d",&n);
	printf(" Enter the elements in array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("even place elements");
	for(i=0;i<n;i++)
	if(i%2  ==0)
printf("%d",a[i]);

		
	
else (i%2!= 0);
printf("%d",a[i]);
}
