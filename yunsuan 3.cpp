#include<stdio.h>
int main()
{
	int n,i,a[1000];
	int c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%7==0||i%11==0)
		 a[c++]=i;
	}
	for(i=0;i<c;i++)
	printf("%d  ",a[i]);
	return 0;
}
