  #include<stdio.h>
   #include<string.h>
   int main()
   {
   		char S1[30],S2[30];
   	printf("enter the string");
   	gets(S1);
   	printf("enter string S2");
   	gets(S2);
   	int i;
   	i=strcmp(S1,S2);
   	if(i==0)
   	printf("strings are same");
   	else
   	printf("strings are different");
   }
