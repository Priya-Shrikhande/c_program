// WAP to calculate the total and avg of five subjects.
#include<stdio.h>
int main()
{
    int avg,total,p,c,m,b,e;
    printf("enter score of 5 subjects=");
    scanf("%d%d%d%d%d",&p,&c,&m,&b,&e);
    total=p+c+b+m+e;
    avg=total/5;
    printf("total score of subjects is=%d",total);
    printf("\naverage of subjects is=%d",avg);

}