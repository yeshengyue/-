#include <stdio.h>
int main() 
{
	int n,a[2000],t;
	scanf("%d",&n);
	for(int i = 1 ; i <= n ; i++)
	 scanf("%d",&a[i]);
	for(int i = 1 ; i <= n ; i++) {
     t=a[i];
     int j=i-1;
     while (j>0&&a[j]>t)
     {
     	a[j+1]=a[j];
     	j--;
	 }
	 a[j+1]=t;
	 for(int j=1;j<=i;j++)
	 printf("%d ",a[j]);
	 printf("\n");
}
}
