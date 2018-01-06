#include<stdio.h>
#define N 100
void fun(int m,int *a,int *n)
{
	int i,c=0;
	for(i=1;i<m;i++){
		if(i%7==0||i%11==0){
		 a[c++]=i;
	}
}
	*n=c;
}
int main()
{
	int a[N],n,k;
	fun(50,a,&n);
	for(k=0;k<n;k++)
	  printf("%4d",a[k]);
	printf("\n");  
}
