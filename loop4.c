#include<stdio.h>
int main()
{
    int num,e,sum=0;
    printf("enter num");
    scanf("%d",&num);
    while(num>0)
    {
        e=num%10;
        sum=sum+e;
        num=num/10;
        
    }
    printf("sum is %d",sum);
}