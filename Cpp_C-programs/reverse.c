#include<stdio.h>
int main()
{
	int n,num,rev,temp=n;
	printf("enter number for reverse :");
	scanf("%d",&n);
	while(n!=0)
	{
		num=n%10;
		rev=rev*10+num;
		n=n/10;
	}

		printf("reverse of number is %d",rev);
return 0;
}
