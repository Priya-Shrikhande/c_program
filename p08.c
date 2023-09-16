// swapping using third variable
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers=");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped numbers are=%d %d",a,b);
}