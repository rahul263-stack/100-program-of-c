  #include<stdio.h>
   #include<string.h>
   int main()
   {
   	char S1[30],S2[30];
   	printf("enter the string");
   	gets(S1);
   	int n;
   	printf(" Enter the value for n");
   	scanf("%d",&n);
   	strncpy(S2,S1,n);
   	printf ("copied string is %s",S2);
   }
