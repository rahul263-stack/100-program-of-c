//shorting of array
#include<stdio.h>
int main()
{
	int a[30],i,j,temp,n;
	printf(" enter the no. of elements of array:-\n");
	scanf("%d",&n);
	printf("Enter the array elements:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("The sorted is:- \n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
	
}

