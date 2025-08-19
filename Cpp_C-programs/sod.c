#include<stdio.h>
int main()
{
	int n,num;
	int sum =0;
	printf("enter a digit");
	scanf("%d",&n);
	while(n!=0)
	{
		num=n%10;
		sum=sum+num;
		n/=10;
	}
	printf("digit of sum is%d",sum);
	return 0;
	
	
}
