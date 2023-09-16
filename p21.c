//Input a four digit number from the keyboard. WAP to obtain sum of first and 
//last digit of the number. 
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
    sum=a+d;
    printf("\nsum of first and last digit is = %d",sum);
}