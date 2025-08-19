#include<stdio.h>
int main()
{
      int a[5];
      int k,x,i,j;
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
		for(i=0;i<5;i++)

	{
	for(j=0;i<5;i++)
	{
	
		if(a[i]+a[i+1]==x)
		{
			printf("pair of elements are%d %d\n",a[i],a[i+1]);
	      }
			 k=a[i];
	             a[i]=a[i+1];
	             a[i+1]=k;
	
		
		}
		
	
}
	return 0;
}

	
