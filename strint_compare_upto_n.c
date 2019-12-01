  #include<stdio.h>
   #include<string.h>
   int main()
   {
   	char S1[30],S2[30];
   	printf("enter the string1");
   	gets(S1);
   	  	
   	printf("enter the string 2");
   	gets(S2);
   	int n;
   	printf(" Enter the value for n");
   	scanf("%d",&n);
   	
   	strncmp(S2,S1,n);
   	if(strncmp(S1,S2,n)==0)
   	printf("the strings are same upto n");
   	else
   	printf("strings are different");
   }
