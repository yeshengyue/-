#include <stdio.h>
#include <math.h>
int n,a[1000],b[1000];
void fun_()
 {
	int p;
	for(int i=1;i<=n-1;i++) {
		int max=1;
		for(int j=2;j<=n-i+1;j++)
			if(a[j]>a[max]) 
			max = j;
		p=a[n-i+1];
		a[n-i+1]=a[max];
		a[max]=p;
	}
}
int main()
 {
	int t,k; 
	scanf("%d",&t);
	for(int i=1;i<=t;i++) {
		k=0;
		scanf("%d",&n);
		for(int j=1;j<=n;j++)
	     scanf("%d",&a[j]);
		fun_();
		b[++k] = a[1];
		for(int j=2;j<=n;j++)
			if(a[j]!=a[j-1])
		    b[++k]=a[j];
		if(k<2) 
		printf("ERROR\n");
		else
	    printf("%d\n",b[2]);
	}
}
