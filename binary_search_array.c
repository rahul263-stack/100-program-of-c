//program to implement binary search
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,array[100],first,last,middle,search;
	printf(" Enter number of elements\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{ 
	  scanf("%d",&array[i]);
	}
	printf("enter the value to find\n");
	scanf("%d",&search);
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first<=last)
	{
		if(array[middle]<search)
		first=middle+1;
		else if(array[middle]==search)
		{
			printf("%dis found at location %d",search,middle);
			break;
		}
		else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	printf("NOT Found!%d is not present in list",search);
}
