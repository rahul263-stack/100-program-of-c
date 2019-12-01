   //program to find length of string using string.h
   #include<stdio.h>
   #include<string.h>
   int main()
   {
   	char a[20],length;
   	printf("Enter the string");
   	gets(a);
   	length=strlen(a);
   	printf("Length of string is %d",length);
   }
