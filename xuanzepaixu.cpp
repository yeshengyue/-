#include<stdio.h>
void sort(int a[],int n)
{
	int t,i,j,k;
	for(i=0;i<n-1;i++)
	 {
	 	k=i;
	 	for(j=i+1;j<n;j++)
	 	 if (a[j]<a[k])
		  k=j;
		  t=a[i];
		  a[i]=a[k];
		  a[k]=t; 
	 }
}
int main()
{
	int a[2000],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	sort(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);

}
