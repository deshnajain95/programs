#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("a is greatest number among all three numbers");
    }
    if(a<b&&c<b)
    {
        printf("b is greatest number among all three numbers");
    }
    else
    {
        printf("c is greatest number among all three numbers");
    }
    return 0;
}
    
