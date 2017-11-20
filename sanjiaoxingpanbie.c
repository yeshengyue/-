#include<stdio.h>
int fun(int a,int b,int c)
{
	
	if(a+b>c&&b+c>a&&a+c>b)
	  {
	  	if (a==b&&b==c)
	  	 printf("3");
	    else if (a==b||b==c||c==a)
		 printf("2");
		else
		 printf("1");  
	  }
	else  
	printf("0");  
 } 
 void main(){
 	int a,b,c,shape;

 	scanf("%d%d%d",&a,&b,&c);
 	shape=fun(a,b,c);
 	return 0;
 }
