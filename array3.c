#include<stdio.h>
int main()
{
    int i,c,n[6]={2,4,7,8,5,9};
    for(i=0;i<=5;i++)
    {
       if(n[i]%i==0)
       {
        c++;
       }
        
    }
    if(c==1)
    {
        printf("%d",c);
    }
}