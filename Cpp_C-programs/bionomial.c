#include<stdio.h>

     int fact(n)
	{
	     int f=1;
	     int i;
	for(i=1;i<=n;i++)
	{
	     f=f*i;	
	}	 
	return f;
	}
	int  calculate(int n,int r)
	{
	     	int c=n-r;
	int B=(fact(n))/(fact(c)*fact(r));
	return B;
      }
int main()
{
	int f;
	int n;
	scanf("%d",& n);
	int r;
	scanf("%d",& r);
	int answer= calculate(n,r);
	printf("%d",answer);
	return 0;
}
