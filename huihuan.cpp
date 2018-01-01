#include<stdio.h>
#include<stdio.h>
int main()
{
	int m[100][100],i,j,l,n,k=1;
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{if(i%2==2)
	{
		l=i-1;
		for(j=0;j<i;++j)
		m[j][i--]=k++;
	
	}
	else{
		l=0;
		for(j=i-1;j>=0;--j)
		m[j][l++]=k++;
}
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<n-i-1;++j)
		printf("%d ",m[i][j]);
		printf("%d \n",m[i][j]);
	
	}
}
