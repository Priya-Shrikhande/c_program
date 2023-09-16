//.WAP to check greater of four numbers. 
#include <stdio.h>
int main() 
{
    int n1,n2,n3,n4;
    printf("enter four numbers=");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if(n1>n2)
    {
        if(n1>n3)
        {
           if(n1>n4)
           {
               printf("%d is greater",n1);
           }
           else
           {
               printf("%d is greater",n4); 
           }
        }
    }
    if(n2>n3)
    {
        if(n2>n4)
        {
          printf("%d is greater",n2);   
        }
        else
        {
            printf("%d is greater",n4); 
        }
    } 
    if(n3>n4)
    {
        printf("%d is greater",n3);
    }
    
    return 0;
}