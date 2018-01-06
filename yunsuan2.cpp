#include<stdio.h>
int main()
{
    int i,n;
    int a=0,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		a=a+i;
		s=s+a;
	}  
	printf("%d",s);
	return 0; 
 } 
