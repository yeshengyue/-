#include<stdio.h>
int main(void)
{
	int i,j,s=0;
	int a[5][3];
	int v[3]={0};
	printf("����ɼ���\n");
	for(i=0;i<5;i++)
            {
	 for(j=0;j<3;j++){
	 	scanf("%d",&a[i][j]);
	 	v[j]+=a[i][j];
	 }
    }
	for(i=0;i<3;i++)  
	 	v[i]=v[i]/5;
	printf("��ѧ��%d\nC����: %d\nӢ�%d\n",v[0],v[1],v[2]);
	return 0;   

 } 
