#include<stdio.h>
int main()
{
	int n,i,k;
	scanf("%d",&n);
	for(i=n+1;i<1000000;i++){
	 for (k=2;k<i;k++)
	 	if (i%k==0)
	 	 break;
	 	 if (k==){
		 printf("%d",i);
		 break;
	}
	 } 
}
