//calculate simple interest
#include<stdio.h>
int main()
{
    int si,p,n,r;
    printf("enter principle ,no of years and rate of interest=");
    scanf("%d%d%d",&p,&n,&r);
    si=p*n*r/100;
    printf("simple interest is =%d",si);
}