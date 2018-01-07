#include<stdio.h>
int main()
{
	char c;
	int i=0,j=0,k=0,l=0;
	while((c=getchar())!='\n')
	{
		if(c==' ') ++i;
		else if(('a'<c&&c<'z')||('A'<c&&c<'Z')) ++j;
		else if ('0'<c&&c<'9') ++k;
		else ++l;
	}
	printf("%d\n%d\n%d\n%d\n",i,j,k,l);
	return 0;
}
