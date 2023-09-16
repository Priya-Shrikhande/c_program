//WAP to calculate the sum of individual digit of a 4 digit number. (d1=n%10;n=n/10).
#include<stdio.h>
int main()
{
    int num,a,b,c,d,sum=0;
    printf("enter the number=");
    scanf("%d%d",&num);
    a=num/1000;
    b=num/100%10;
    c=num/10%10;
    d=num%10;
    sum=a+b+c+d;
    printf("\nsum of individual digits is= %d",sum);
}