#include<stdio.h>
#define N 20
fun (int *a,int n,int *o,int *e)
{
	int i,sum_o=0,sum_e=0;
	for(i=0;i<n;i++)
	 if(a[i]%2==0)
	   sum_e+=a[i];
	 else
	   sum_o+=a[i];
	*o=sum_o;
	*e=sum_e;    
 } 
 int main()
 {
 	int a[N]={1,9,2,3,11,6},i,n=8,o,e;
 	printf(": \n");
 	for(i=0;i<n;i++)
 	printf("%3d",*(a+i));
 	printf("\n");
 	fun(a,n,&o,&e);
 	printf("  %d\n",o);
 	printf("  %d\n",e);
 	
 }
