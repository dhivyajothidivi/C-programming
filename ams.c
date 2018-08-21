#include<stdio.h>
int main()
{
	int r,n,a,sum=0;
	scanf("%d",&n);
	a=n;
	if(n<10000)
	{
		while(a!=0)
		{
			r=a%10;
			sum=sum+(r*r*r);
			a=a/10;
		}
		if(sum==n)
		{
			printf("yes");
		}	
		else
		{
			printf("no");
		}
	}
	return 0;
}
			
	
