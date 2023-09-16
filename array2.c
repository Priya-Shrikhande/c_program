#include<stdio.h>
int main()
{
    int i,n[6]={2,4,7,8,5,9};
    for(i=0;i<=5;i++)
    {
        if(n[i]%2==0)
        {
            printf(" %d",n[i]);
        }
        
    }
}