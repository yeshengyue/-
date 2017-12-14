#include<stdio.h>
int main()
{
	int a[20000],n,max;
	for(int i=1;i<=10;i++)
	  scanf("%d",&a[i]);
	for (int i=i;i<=10;i++)
	  {
	  	if (a[i]<a[i+1])
	  	max=a[i+1];
		}  
	printf("%d",max);	
 } 
