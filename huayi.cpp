#include<stdio.h> 
void fun(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		  printf("%d ",1);
		for(j=2;j<=n+1-i;j++)
		  printf("%d ",j);
		printf("\n");   
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	fun(n);
}
