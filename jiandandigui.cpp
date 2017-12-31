#include<stdio.h>
int fun(int n)
{
	if (n==1)
	 return 2;
	if (n==2)
	return 3;
	if(n==3)
	return 5;
	if(n>3)
	return fun(n-3)+fun(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fun(n));
}
