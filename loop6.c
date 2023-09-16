#include<stdio.h>
int main()
{
    int n,c=0,i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("prime no");
    }
    else{
        printf("not prime no");
    }
}