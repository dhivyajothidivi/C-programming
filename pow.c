#include<stdio.h>
int main()
{
	int long power=0,exp;
	int base,i;
	printf("enter the base");
	scanf("%d",&base);
	printf("enter the exp");
	scanf("%d",&exp);
	for(i=1;i<=exp;i++)
	{
		power=power*base;
	}
	printf("%d * %d",base,exponent,power);
	return 0;
}
