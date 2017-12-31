#include<stdio.h>
int main()
{
   int n,k,i,j,a[2000],c;
   scanf("%d",&n);
   for (i=1;i<=n;i++)
   {
   	c=0;
   	scanf("%d",&k);
   	for (j=2;j<=k;++j){
   	 while(k%j==0&&k!=1){
   	 	a[++c]=j;
   	 	k=k/j;
		}
	}
	for(j=1;j<c;j++)
	printf("%d*",a[j]);
	printf("%d\n",a[c]);
   	
   }
 } 
