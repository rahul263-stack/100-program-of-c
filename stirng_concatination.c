  #include<stdio.h>
   #include<string.h>
   int main()
   {
   	char S1[30],S2[30];
   	printf("enter the string1");
   	gets(S1);
   	  	
   	printf("enter the string 2");
   	gets(S2);
   	strcat(S1,S2);
   	printf("Concated string is %s",S1);
   }
