#include<stdio.h>
int main()
{
	int i,f=1,num;
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		f=f*i;
	}
	printf("%d",num,f);
}
