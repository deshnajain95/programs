#include<stdio.h>
int main()
{
	int i,sum, n,a=0 ,b=1;
	printf("enter number ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
	sum=a+b;
	a=b;
	b=sum;
	}
	printf("fabonacci series %d",sum);
	return 0; 
}
