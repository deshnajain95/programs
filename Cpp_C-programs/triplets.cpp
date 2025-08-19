#include<stdio.h>
int main()
{
      int a[5];
      int x,i;
      int count=0;
      printf("enter array elements ");
	      for(i=0;i<5;i++)
      {
      	scanf("%d",&a[i]);
      	
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter an element \n");
	scanf("%d\n",&x);
	for(int i=0;i<5;i++)
	{
		if(a[i]+a[i+1]+a[i+2]==x)
		{
			printf("pair of elements are%d %d %d \n",a[i],a[i+1],a[i+2]);
			count++;
		}
	}
	return 0;
}

	
