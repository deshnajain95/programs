#include<stdio.h>
int main()
{
	int i,n,sum=1;
	printf("enter number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	if(i%2==0)
	{
		sum=sum-i;
	}
	else
	{
		sum=sum+i;
	}}
	printf("sum of series %d",sum);
	return 0;
	}
