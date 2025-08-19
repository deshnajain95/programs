#include<stdio.h>
int main()
{
	double x1,x2,x3,y1,y2,y3,m1,m2;
	printf("enter points for x1,y1");
	scanf("%f%f",&x1,&y1);
       printf("enter points for x2,y2");
       scanf("%f%f",&x2,&y2);
       printf("enter points for x3,y3");
       scanf("%f%f",&x3,&y3);
	m1=(y2-y1)/(x2-x1);
	printf("%f",m1);
	m2=(y3-y2)/(x3-x2);
	printf("%f",m2);
	if(m1==m2)
	{
		printf("three points fall in straight line");
	}
	else{
		printf("three numbers are not fall in straight line");
		
	}
	return 0;
}
