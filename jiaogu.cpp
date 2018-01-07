#include <stdio.h>
int main()
{
	int i,t,n,a[2000],k;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	 scanf("%d",&a[i]);
	for(i=1;i<=t;i++){
		k=a[i];
		n=0;
		if(k==1)
		printf("0\n");
		else
		{
		while(k!=1){
			if(k%2==0)
			k=k/2;
		    else
			k=(3*k+1)/2;
			n++;
		}
	
		printf("%d",n);
		printf("\n");	
		}
	} 
}
