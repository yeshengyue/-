#include<stdio.h>
int fun(int x)
{  
   int a,b,c,d,e,f;
   f=x/100000;
   e=x/10000%10;
   d=x/1000%10;
   c=x/100%10;
   b=x/10%10;
   a=x%10;
   if(f==0&&(a==e)&&(b==d))
     
     return 1;
   else 
     if(f!=0&&((a==f)&&(b==e)&&(c==d)))
	 return 1;
   else
     return 0;	   
 } 
 int main()
 {
 	int n,t,s;
 	int num=0;
 	scanf("%d",&n);
 	if(n<=10||n>=100)
 	 printf("-1");
 	else
	 {
	 	for(int i=10000;i<=999999;i++)
	 	{
	 		t=i/100000;
	 		t=t+(i/10000)%10;
	 		t=t+(i/1000)%10;
	 		t=t+(i/100)%10;
	 		t=t+(i/10)%10;
	 		t=t+i%10;
	 		if(t==n)
	 		{
	 		   s=fun(i);
			   if(s==1){
			   printf("%d\n",i);
			   num++;	
			 }
		 }
	  } 
	  if (num==0)
	  printf("-1");
}
     return 0;
 }
