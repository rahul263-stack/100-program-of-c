//program to design a calculator using switch case
#include<stdio.h>

int main()
{
	int a,b,c, choice;
	printf("Menu is\n");
	printf("press 1 for addition\n");
	printf("press 2 for substraction\n");
	printf("press 3 for multiplication\n");
	printf(" press 4 for division\n");
	printf(" enter your choice");
	scanf("%d",&choice);
	 printf("enter number");
	 scanf("%d%d",&a,&b);
	 
	 switch(choice)
	 {
	 	case 1:
	 		c=a+b;
	 		printf("the sum are%d",c);
	 		break;
	 	case 2:
	 		c=a-b;
	 			printf("the sub are%d",c);
	 		break;
	 	case 3:
		   c=a*b;
		   	printf("the multi is%d",c);
		   break;
		case 4:
		   	c=a/b;
		   		printf("the division is %d",c);
		   	break;
		   	default:
		   		printf(" no match");
		   		
	 }
	

	}
