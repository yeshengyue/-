#include<stdio.h>
int main()
{
	int n,y,x;
	int s=0;
	scanf("%d",&n);
	y=n;
	while(n!=0)
	{   
		x=n%10;
		s=s*10+x;
		n=n/10; 
	}
	if(y==s)
	 printf("Yes\n");
	else
	 printf("No\n");
	return 0;
}
