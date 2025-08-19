#include<stdio.h>
int main()
{
	int i,marks,name;
	for(i=0;i<=10;i++)
	{
		printf("enter marks of student %d:\n",i+1);
		scanf("%d",&marks);
		if(marks<=35)
		{
			printf("enter name of that student whose marks are less than 35:\n");
			scanf("%s",&name);
		}
		
	}
	
	return 0;
}
