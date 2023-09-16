#include<stdio.h>
int main()
{
    int num,temp,r,c,sum=0;
    printf("enter number");
    scanf("%d",&num);
    temp=num;
    do
    {
        r=num%10;
        c=r*r*r;
        sum=sum+c;
        num=num/10;
    }
    while(num!=0);
    if(temp==sum)
    {
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
}