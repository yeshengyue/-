#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for (i=2;i<=9999;i++)
	  if(n%i==0)
        break;
	if (i==n)		   
       printf("sushu");
	return 0;	 
 } 
