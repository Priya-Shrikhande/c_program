// calculate third angle
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 2 angles=");
    scanf("%d%d",&a,&b);
    c=180-(a+b);
    printf("third angle is=%d",c);
}