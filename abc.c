#include<stdio.h>
int main()
{
	int r,n,m,a,sum=0,i;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=n+1;i<m;i++)
	{
		m=i;
		n=i;
		if(n<10000)
		{
			while(m!=0)
			{
				m=m/10
				++a;
			}
			while(n!=0)
			{
				r=n%10;
				sum=sum+(r*r*r);
				n=n/10;
			
			}
		}
	}
	if(sum==i)
	{
		printf("%d",i);
	}	
	else
	{
		printf("no");
	}
	return 0;
}
			
	
