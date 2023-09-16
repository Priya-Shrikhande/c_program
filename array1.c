#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int n[6];
    printf("enter array=");
    for(j=0;j<=5;j++)
    {
        scanf("%d",&n[j]);
    }
    for(i=0;i<=5;i++)
    {
        sum=sum+n[i];
    }
        printf(" %d",sum);
    
}