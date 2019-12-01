 #include<stdio.h>
 #include<conio.h>
 int add(int , int);//declaring a function
  main()
 {
 	int s,x,y;
 	printf(" enter two numbers");
 	scanf("%d%d",&x,&y);
 	s=add(x,y);//call by value
 	printf(" sum is %d",s);
 	
 }
 int add(int a, int b)//()take nothing   
 {
 	int c;
 	c=a+b;
 	return(c);
 }
