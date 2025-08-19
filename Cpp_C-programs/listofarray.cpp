#include<stdio.h>
int main()
{
      int arr[5];
      int i,arr1[i];
      printf("enter array elements ");
	      for(i=0;i<5;i++)
      {
      	scanf("%d",&arr[i]);
      	
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
	for(int i=0;i<5;i++)
{

	if(i%2==0)
	{
		arr1[i]=10*arr[i];
	}
	else
	{
		arr1[i]=2*arr[i];
		
	}}		
	printf("new list of array \n");

	
	for(int i=0;i<5;i++)
	{
		printf("%d\n",arr1[i]);
	}
	return 0;
 } 
 
