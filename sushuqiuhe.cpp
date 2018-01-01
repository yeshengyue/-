#include<stdio.h>
 int fun(int n)
 {
 	int i,j,t=0,k=0,yes;
 	while(n>2&&k<10){
 		yes=1;
 		for(i=2;i<=n/2;i++)
 		if(n%i==0){
 			yes=0;
			break;
		 } 
		if(yes==1){
		t=t+n;
		k++; 
	 }
	 n--;
}
   return t;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fun(n)); 
}
