#include<stdio.h>
main()
{
	int choice,a,b,s;
	printf("\n.1 addition ");
	printf("\n.2 Even or odd" );
	printf("\n.3 printing n numbers");
	printf("\n\n Enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf(" Enter two numbers");
			scanf("%d%d",&a,&b);
			s=a+b;
			printf("\n sum is %d",s);
			break;
		case 2:
		    printf(" enter a number");
		    scanf("%d",&a);
			if (a%2==0)	
			   printf("even numbers");
			else
			   printf(" odd number");
		    break;
		case 3:
		    printf(" enter a number");
			scanf("%d",&a);
			for(b=1;b<=a;b++)
			printf( "%d",b);
			break;
	default	:
        printf("invalid choice");		
		}
			
			
				   
	
	
}
