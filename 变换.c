#include<stdio.h>
int main()
{
	char x;
	scanf ("%c",&x);
	if (x>='a'&&x<='z')
	 printf("%c\n",x-'a'+'A');
	else if(x>='A'&&x<='Z') 
	 printf("%c\n",x-'A'+'a');
	else
	 printf("error");
	return 0;   
 } 
