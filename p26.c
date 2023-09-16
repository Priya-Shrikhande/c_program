//WAP to find entered number is even or odd 
#include<stdio.h>
int main()
{
    int num;
    printf("enter the number=");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("\nit is a even number");
    }
    else{
        printf("\nit is  a odd number");
    }
}