#include<stdio.h>
int main()
{
      int a[5];
      int x,i,j,k;
      int count=0;
      printf("enter array elements ");
	      for(i=0;i<=7;i++)
      {
      	scanf("%d",&a[i]);
      	
	}
	for(i=0;i<=7;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("enter an element \n");
	scanf("%d\n",&x);
		for(i=0;i<7;i++)

	{
	for(j=i+1;j<7;i++)
	{
		for(k=j+1;k<=7;k++)
	{
	
		if(a[i]+a[j]+a[k]==x)
		{
		
				      
	
		printf("pair of elements are%d %d %d\n",a[i],a[j],a[k]);
	}
}
}

}
return 0;
}

			 
			 
		
	
