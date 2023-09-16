#include<stdio.h>
int main()
{
    int n1=0,n2=1,sum,num,i;
    printf("enter number");
    scanf("%d",&num);
    printf("\n%d %d",n1,n2);
    for(i=1;i<=num;i++)
    {
        sum=n1+n2;
        printf(" %d",sum);
        n1=n2;
        n2=sum;
        
    }
}