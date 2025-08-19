#include<stdio.h>

int main()
{
	int arr[5];
	int i,sum=0;

	for(i=0;i<=5;i++)
	{
		printf("enter element for array of index  %d\n",i);
		scanf("%d",&arr[i]);
       
	} for(i=0;i<=5;i++)
	{
	printf("elements in an array are %d\n",arr[i]);
	 sum=sum+arr[i];
}
printf("sum of array elements is %d\n",sum);
	return 0;
 } 
