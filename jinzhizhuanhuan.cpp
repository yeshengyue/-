#include<stdio.h>
int fun(int m,int k)
{
	int a[20],i,j;
	for(i=0;m;i++)
	{
		a[i]=m%k;
		m=m/k;
	}
	for(j=i-1;j>=0;j--)
	printf("%d",a[j]);
 } 
 int main()
 {
 	int b,n;
 	scanf("%d %d",&n,&b);
 	fun(n,b);
 }
