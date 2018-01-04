#include<stdio.h>
double fun(int n,double x)
{
	int i;
	double a=1,h=x,s=1.0;
	s=s+h/a;
	for(i=2;i<=n;i++)
	{
		h=h*x;
		a=a*i;
		s=s+h/a; 
	 } 
	 return s;
 } 
 int main()
 {
 	printf("%f\n",fun(10,0.3));
 }
