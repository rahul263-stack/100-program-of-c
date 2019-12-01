  #include<stdio.h>
  main()
  {
  	int k;
  	k=sum(1000 );
  	printf("%d",k);
  	
  }
  int sum( int a)
  {
  	int s;
  	if(a==1)
  	return(a);
  	s=a+sum(a-1);
  	return(s);
  }
