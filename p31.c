//WAP to check whether a number is divisible according to the following conditions. 
//1. no is divisible by 8 & 5; 2.no is divisible by 8; 3.no is divisible by 5;
 //4.no is divisible neither by 8 nor by 5;

#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%8==0 && n%5==0)
    {
        printf("number is divisible by 8 and 5");
    }
    else if(n%8==0)
       {
           printf("number is divisible by 8");
       }
         else if(n%5==0)
            {
                printf("number is divisible by 5");
            }
             else
             {
                printf("number is neither divisible by 8 nor 5");
             }

}