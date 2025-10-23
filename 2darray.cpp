#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p[3];
	p[0]=new int[4];
	p[1]=new int[4];
	p[2]=new int[4];

for(int i=0;i<3;i++){
	for(int j=0;j<4;j++)
	{
		scanf("%d",&p[i][j]);
	}
}
for(int i=0;i<3;i++){
	for(int j=0;j<4;j++)
	{
		printf("%d",p[i][j]);
	}
}
}
