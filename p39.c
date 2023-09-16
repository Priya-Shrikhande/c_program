//WAP to print greater no. from 2. 
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 nums=");
    scanf("%d%d",&a,&b);
    COMPARE:
    printf("\n %d is greater",a);
    if(a>b)
    {
      goto COMPARE;
    }
    else
    {
        printf("\n %d is greater",b);
    }  
}