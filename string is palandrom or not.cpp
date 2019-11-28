#include<stdio.h>
#include<conio.h>
int main()
{
	char s[25], rs[25]={'10'};
	int i, length=0, flag=0;
	printf("enter string\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		length++;
		
	}
	printf("the length of string is %s=%d\n",s,length);
	for(i=length-1;i>=0;i--){
		rs[length -i-1]=s[i];
		
	}
	for(flag = 1;i=0;i<length;i++)
	{
		if(rs[i]!=s[i])
		flag=0;
	}
	if (flag==1)
	printf("%s is a palindrom \n",s);
	else
	printf("string is palindrome \n",s)
}
