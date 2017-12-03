#include<stdio.h>
int fun(int x)
{
	int s=0;
	for (int i=2;i<x;i++)
	 if(x%i==0)
	 s=s+i;
	return s; 
}
int main()
{
	int n;
	scanf ("%d",&n);
	printf("%d",fun(n));  
} 
