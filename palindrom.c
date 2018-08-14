#include<stdio.h>
int main()
{
	int n,i,t;
	int a,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	scanf("%d",&a);
	while(n>0)
	{
		a=n%10;
		n=n/10;
		sum=sum+a;
	}
	if(n==t)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
