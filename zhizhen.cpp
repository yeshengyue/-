#include <stdio.h>
void fun(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=*a;
 } 
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	fun(&x,&y);
	printf("%d %d",x,y);
 } 
 
